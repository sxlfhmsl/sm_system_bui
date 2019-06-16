#include "httpmanager.h"
#include "httpreply.h"

#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QHttpMultiPart>
#include <QFile>

HttpManager::HttpManager(QObject *parent)
	: QObject(parent)
{
	this->init_Manager();
}

HttpManager::~HttpManager()
{
}

void HttpManager::init_Manager()
{
	this->manager = new QNetworkAccessManager(this);
	this->default_header.insert(QNetworkRequest::UserAgentHeader, "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/74.0.3729.169 Safari/537.36");
}

// get请求
HttpReply* HttpManager::get(QString url)
{
	QNetworkRequest request(QUrl(this->baseurl + url));
	foreach(int h_key, this->default_header.keys())
		request.setHeader((QNetworkRequest::KnownHeaders)h_key, QVariant(this->default_header[h_key]));
	return new HttpReply(this->manager->get(request));
}

// post请求-----普通
HttpReply* HttpManager::post(QString url, const QJsonObject &params)
{
	QNetworkRequest request(QUrl(this->baseurl + url));
	foreach(int h_key, this->default_header.keys())
		request.setHeader((QNetworkRequest::KnownHeaders)h_key, QVariant(this->default_header[h_key]));
	request.setHeader(QNetworkRequest::ContentTypeHeader, QVariant("application/json;charset=UTF-8"));
	QJsonDocument docu(params);
	return new HttpReply(this->manager->post(request, docu.toJson(QJsonDocument::Compact)));
}

// post请求-----上传文件
HttpReply* HttpManager::post(QString url, const QString &content_type, const QString &f_name)
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
	return new HttpReply(this->manager->post(request, multiPart));
}
