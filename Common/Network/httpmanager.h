#pragma once

#include <QObject>
#include <QJsonObject>

#include "common_global.h"

class QNetworkAccessManagerP;
class QThread;
class HttpReply;
/**
 * @brief The HttpManager class
 * @details Http通信管理类
 */
class COMMON_EXPORT HttpManager : public QObject
{
	Q_OBJECT

signals:
	// 禁止外部调用-----与QNetworkAccessManagerP配合绑定-----可能跨线程
	// 发起get请求信号
	// 参数0 与请求方通信的对象
	// 参数1 url地址
	void signal_get(HttpReply*, QString);

	// 禁止外部调用-----与QNetworkAccessManagerP配合绑定-----可能跨线程
	// 发起post请求信号
	// 参数0 与请求方通信的对象
	// 参数1 url地址
	// 参数2 请求参数
	void signal_post(HttpReply*, QString, QJsonObject);

	// 禁止外部调用-----与QNetworkAccessManagerP配合绑定-----可能跨线程
	// 发起post请求信号-----发送文件
	// 参数0 与请求方通信的对象
	// 参数1 url地址
	// 参数2 请求头 content-type
	// 参数3 文件路径
	void signal_post(HttpReply*, QString, QString, QString);
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

private:
	// 网络管理类
	QNetworkAccessManagerP *manager = nullptr;
	// 网络管理类所在线程
	QThread *thread;

	// 初始化网络类
	void init_Manager();

private slots:
	// 请求完成-----一般参数
    void slot_json_result(HttpReply* reply, QJsonObject result);
};
