#include "httpmanager.h"
#include "httpreply.h"

#include <QNetworkAccessManager>
#include <QJsonDocument>

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

HttpReply* HttpManager::post(QString url, const QJsonObject &params)
{
	QNetworkRequest request(QUrl(this->baseurl + url));
	foreach(int h_key, this->default_header.keys())
		request.setHeader((QNetworkRequest::KnownHeaders)h_key, QVariant(this->default_header[h_key]));
	request.setHeader(QNetworkRequest::ContentTypeHeader, QVariant("application/json;charset=UTF-8"));
	QJsonDocument docu(params);
	HttpReply *reply = new HttpReply(this->manager->post(request, docu.toJson(QJsonDocument::Compact)));
	return reply;
}
