#include "qnetworkaccessmanagerp.h"

#include <QJsonDocument>
#include <QHttpPart>
#include <QNetworkReply>
#include <QFile>
#include <QThread>

QNetworkAccessManagerP::QNetworkAccessManagerP(QObject *parent)
	: QNetworkAccessManager(parent)
{
	QObject::connect(this, SIGNAL(finished(QNetworkReply*)), this, SLOT(reply_finished(QNetworkReply*)));
}

QNetworkAccessManagerP::~QNetworkAccessManagerP()
{
}


void QNetworkAccessManagerP::init_NetworkAccessManager()
{
	this->default_header.insert(QNetworkRequest::UserAgentHeader, "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/74.0.3729.169 Safari/537.36");
}

void QNetworkAccessManagerP::get(HttpReply* reply, QString url)
{
	QNetworkRequest request(QUrl(this->baseurl + url));
	foreach(int h_key, this->default_header.keys())
		request.setHeader((QNetworkRequest::KnownHeaders)h_key, QVariant(this->default_header[h_key]));
	this->reply_map[QNetworkAccessManager::get(request)] = reply;
}

void QNetworkAccessManagerP::post(HttpReply* reply, QString url, QJsonObject params)
{
	QNetworkRequest request(QUrl(this->baseurl + url));
	foreach(int h_key, this->default_header.keys())
		request.setHeader((QNetworkRequest::KnownHeaders)h_key, QVariant(this->default_header[h_key]));
	request.setHeader(QNetworkRequest::ContentTypeHeader, QVariant("application/json;charset=UTF-8"));
	QJsonDocument docu(params);
	this->reply_map[QNetworkAccessManager::post(request, docu.toJson(QJsonDocument::Compact))] = reply;
}

void QNetworkAccessManagerP::post(HttpReply* reply, QString url, QString content_type, QString f_name)
{
	QNetworkRequest request(QUrl(this->baseurl + url));
	foreach(int h_key, this->default_header.keys())
		request.setHeader((QNetworkRequest::KnownHeaders)h_key, QVariant(this->default_header[h_key]));
	QHttpMultiPart *multiPart = new QHttpMultiPart(QHttpMultiPart::FormDataType);
	QHttpPart file_part;
	file_part.setHeader(QNetworkRequest::ContentTypeHeader, QVariant(content_type));
	file_part.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"file\"; filename=\"" + f_name + "\""));

	// 文件
	QFile *file = new QFile(f_name);
	file->open(QIODevice::ReadOnly);
	file_part.setBodyDevice(file);
	file->setParent(multiPart);
	multiPart->append(file_part);

	// 开始上传
	this->reply_map[QNetworkAccessManager::post(request, multiPart)] = reply;
}

void QNetworkAccessManagerP::reply_finished(QNetworkReply* reply)
{
	qDebug() << "请求响应开始" << QThread::currentThreadId() << endl;
	QJsonObject result;
	if (reply->error() == QNetworkReply::NoError)
	{
		QVariant content_type = reply->header(QNetworkRequest::ContentTypeHeader);
		if (content_type.toString().indexOf("application/json") != -1)
		{
			result = this->parse_to_json(reply);
			emit this->signal_json_result(this->reply_map[reply], result);
			this->reply_map.remove(reply);
		}
	}
	else
	{
		result.insert("code", reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt());
		result.insert("msg", reply->errorString());
		emit this->signal_json_result(this->reply_map[reply], result);
		this->reply_map.remove(reply);
	}
	reply->deleteLater();
	qDebug() << "请求响应结束" << QThread::currentThreadId() << endl;
}

QJsonObject QNetworkAccessManagerP::parse_to_json(QNetworkReply* reply)
{
	QJsonObject json_default;
	json_default.insert("code", 40001);
	json_default.insert("msg", "返回数据格式非json");

	QJsonParseError json_error;
	QJsonDocument parse_doucment = QJsonDocument::fromJson(reply->readAll(), &json_error);
	if (json_error.error == QJsonParseError::NoError)
	{
		QJsonObject obj = parse_doucment.object();
		if (!obj.contains("code"))
			obj.insert("code", 0);
		return obj;
	}
	else
	{
		return json_default;
	}
}
