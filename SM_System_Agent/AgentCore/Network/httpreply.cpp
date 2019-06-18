#include "httpreply.h"
#include <QNetworkReply>
#include <QJsonDocument>
#include <qDebug>

HttpReply::HttpReply(QNetworkReply* reply, QObject *parent)
	: QObject(parent)
{
	this->reply = reply;
	// 绑定解析
	QObject::connect(this->reply, SIGNAL(finished()), this, SLOT(slot_recv_finished()));
}

HttpReply::~HttpReply()
{
	// 处理到reply
	this->reply->deleteLater();
	QObject::disconnect(this->reply, SIGNAL(finished()), this, SLOT(slot_recv_finished()));
}

void HttpReply::slot_recv_finished()
{
	qDebug() << "请求响应开始" << endl;
	if (this->reply->error() == QNetworkReply::NoError)
	{
		QVariant content_type = this->reply->header(QNetworkRequest::ContentTypeHeader);
		if (content_type.toString().indexOf("application/json") != -1)
		{
			this->parse_json.empty();
			this->parse_json = this->parse_to_json();
		}
	}
	else
	{
		this->parse_json.empty();
		this->parse_json.insert("code", this->reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt());
		this->parse_json.insert("msg", this->reply->errorString());
	}
	emit this->finished();
	qDebug() << "请求响应结束" << endl;
}

QJsonObject HttpReply::parse_to_json()
{
	QJsonObject json_default;
	json_default.insert("code", 40001);
	json_default.insert("msg", "返回数据格式非json");

	QJsonParseError json_error;
	QJsonDocument parse_doucment = QJsonDocument::fromJson(this->reply->readAll(), &json_error);
	if (json_error.error == QJsonParseError::NoError)
	{
		QJsonObject obj = parse_doucment.object();
		if (!obj.contains("code"))
			return json_default;
		return obj;
	}
	else
	{
		return json_default;
	}
}

QJsonObject& HttpReply::get_parse_json()
{
	return this->parse_json;
}
