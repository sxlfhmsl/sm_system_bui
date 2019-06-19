#include "httpmanager.h"
#include "httpreply.h"
#include "qnetworkaccessmanagerp.h"

#include <QThread>
#include <qDebug>

HttpManager::HttpManager(QObject *parent)
	: QObject(parent)
{
	this->init_Manager();
}

HttpManager::~HttpManager()
{
	/*---------------多线程代码-----------*/
	this->thread->quit();
	/*---------------多线程代码-----------*/
	QObject::disconnect(this, SIGNAL(signal_get(HttpReply*, QString)), this->manager, SLOT(get(HttpReply*, QString)));
	QObject::disconnect(this, SIGNAL(signal_post(HttpReply*, QString, QJsonObject)), this->manager, SLOT(post(HttpReply*, QString, QJsonObject)));
	QObject::disconnect(this, SIGNAL(signal_post(HttpReply*, QString, QString, QString)), this->manager, SLOT(post(HttpReply*, QString, QString, QString)));

	QObject::disconnect(this->manager, SIGNAL(signal_json_result(HttpReply*, QJsonObject)), this, SLOT(slot_json_result(HttpReply*, QJsonObject)));
	this->manager->deleteLater();

	/*---------------多线程代码-----------*/
	this->thread->deleteLater();
	/*---------------多线程代码-----------*/
}

void HttpManager::init_Manager()
{
	this->manager = new QNetworkAccessManagerP();
	/*---------------多线程代码-----------*/
	this->thread = new QThread();
	this->manager->moveToThread(this->thread);
	/*---------------多线程代码-----------*/
	QObject::connect(this, SIGNAL(signal_get(HttpReply*, QString)), this->manager, SLOT(get(HttpReply*, QString)));
	QObject::connect(this, SIGNAL(signal_post(HttpReply*, QString, QJsonObject)), this->manager, SLOT(post(HttpReply*, QString, QJsonObject)));
	QObject::connect(this, SIGNAL(signal_post(HttpReply*, QString, QString, QString)), this->manager, SLOT(post(HttpReply*, QString, QString, QString)));

	QObject::connect(this->manager, SIGNAL(signal_json_result(HttpReply*, QJsonObject)), this, SLOT(slot_json_result(HttpReply*, QJsonObject)));
	/*---------------多线程代码-----------*/
	this->thread->start();
	/*---------------多线程代码-----------*/
}

// get请求
HttpReply* HttpManager::get(QString url)
{
	qDebug() << "主线程ID:" << QThread::currentThreadId() << endl;
	HttpReply* reply = new HttpReply();
	emit this->signal_get(reply, url);
	return reply;
}

// post请求-----普通
HttpReply* HttpManager::post(QString url, const QJsonObject &params)
{
	qDebug() << "主线程ID:" << QThread::currentThreadId() << endl;
	HttpReply* reply = new HttpReply();

	emit this->signal_post(reply, url, params);
	return reply;
}

// post请求-----上传文件
HttpReply* HttpManager::post(QString url, const QString &content_type, const QString &f_name)
{
	qDebug() << "主线程ID:" << QThread::currentThreadId() << endl;
	HttpReply* reply = new HttpReply();
	emit this->signal_post(reply, url, content_type, f_name);
	return reply;
}

void HttpManager::slot_json_result(HttpReply* reply, QJsonObject result)
{
	reply->set_parse_json(result);
}
