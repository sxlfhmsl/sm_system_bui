#pragma once

#include <QObject>
#include <QMap>

class QNetworkAccessManager;
class HttpReply;
/**
 * @brief The HttpManager class
 * @details Http通信管理类
 */
class HttpManager : public QObject
{
	Q_OBJECT

public:
	HttpManager(QObject *parent = nullptr);
	~HttpManager();

	// 建立get请求， 请求数据或者文件
	HttpReply* get(QString url);

	// 建立post请求, 请求数据或者文件
	HttpReply* post(QString url, const QJsonObject &params);

	// 建立post请求, 
	// url:地址；content_type:header中的content type；f_name:文件名
	HttpReply* post(QString url, const QString &content_type, const QString &f_name);

	static HttpManager* instance();

private:
	static HttpManager* m_instance;
	// 网络管理类
	QNetworkAccessManager *manager = nullptr;

	// 默认header 已存在的，token不存放于此
	QMap<int,QString> default_header;

	// 初始化网络类
	void init_Manager();

	// 基础地址
	const QString baseurl = "http://127.0.0.1:5000";
};
