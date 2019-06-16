#pragma once

#include <QObject>
#include <QMap>

#include "common_global.h"

class QNetworkAccessManager;
class HttpReply;
/**
 * @brief The HttpManager class
 * @details Http通信管理类
 */
class COMMON_EXPORT HttpManager : public QObject
{
	Q_OBJECT

public:
	HttpManager(QObject *parent = nullptr);
	~HttpManager();

	HttpReply* post(QString url, const QJsonObject &params);

private:
	// 网络管理类
	QNetworkAccessManager *manager = nullptr;

	// 默认header 已存在的，token不存放于此
	QMap<int,QString> default_header;

	// 初始化网络类
	void init_Manager();

	// 基础地址
	const QString baseurl = "http://127.0.0.1:5000";
};
