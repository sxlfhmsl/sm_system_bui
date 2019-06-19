#include "httpmanager.h"
#include "httpreply.h"
#include "qnetworkaccessmanagerp.h"

#include <QThread>

HttpManager::HttpManager(QObject *parent)
	: QObject(parent)
{
	this->init_Manager();
}

HttpManager::~HttpManager()
{
	this->thread->quit();
	QObject::disconnect(this, SIGNAL(signal_get(HttpReply*, QString)), this->manager, SLOT(get(HttpReply*, QString)));
	QObject::disconnect(this, SIGNAL(signal_post(HttpReply*, QString, QJsonObject)), this->manager, SLOT(post(HttpReply*, QString, QJsonObject)));
	QObject::disconnect(this, SIGNAL(signal_post(HttpReply*, QString, QString, QString)), this->manager, SLOT(post(HttpReply*, QString, QString, QString)));

	QObject::disconnect(this->manager, SIGNAL(signal_json_result(HttpReply*, QJsonObject)), this, SLOT(slot_json_result(HttpReply*, QJsonObject)));
	this->manager->deleteLater();
	this->thread->deleteLater();
}

void HttpManager::init_Manager()
{
	this->manager = new QNetworkAccessManagerP();
	this->thread = new QThread();
	this->manager->moveToThread(this->thread);
	QObject::connect(this, SIGNAL(signal_get(HttpReply*, QString)), this->manager, SLOT(get(HttpReply*, QString)));
	QObject::connect(this, SIGNAL(signal_post(HttpReply*, QString, QJsonObject)), this->manager, SLOT(post(HttpReply*, QString, QJsonObject)));
	QObject::connect(this, SIGNAL(signal_post(HttpReply*, QString, QString, QString)), this->manager, SLOT(post(HttpReply*, QString, QString, QString)));

	QObject::connect(this->manager, SIGNAL(signal_json_result(HttpReply*, QJsonObject)), this, SLOT(slot_json_result(HttpReply*, QJsonObject)));
	this->thread->start();
}

// get请求
HttpReply* HttpManager::get(QString url)
{
	HttpReply* reply = new HttpReply();
	emit this->signal_get(reply, url);
	return reply;
}

// post请求-----普通
HttpReply* HttpManager::post(QString url, const QJsonObject &params)
{
	HttpReply* reply = new HttpReply();

	emit this->signal_post(reply, url, params);
	return reply;
}

// post请求-----上传文件
HttpReply* HttpManager::post(QString url, const QString &content_type, const QString &f_name)
{
	HttpReply* reply = new HttpReply();
	emit this->signal_post(reply, url, content_type, f_name);
	return reply;
}

void HttpManager::slot_json_result(HttpReply* reply, QJsonObject result)
{
	reply->set_parse_json(result);
}
