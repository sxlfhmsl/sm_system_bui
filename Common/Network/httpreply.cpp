#include "httpreply.h"
#include <QNetworkReply>
#include <QJsonDocument>

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
}

void HttpReply::slot_recv_finished()
{
	if (this->reply->error() == QNetworkReply::NoError)
	{
		QVariant content_type = this->reply->header(QNetworkRequest::ContentTypeHeader);
		if (content_type.toString().indexOf("application/json") != -1)
		{
			emit finshed_json(this->parse_to_json());
		}
	}
	else
	{
		QVariant status_code = this->reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);
		QString error_msg = this->reply->errorString();
	}
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
		// 获取状态码
		QVariant statusCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);
		json_default["code"] = statusCode.toInt();
		json_default["msg"] = this->reply->errorString();
		return json_default;
	}
}
