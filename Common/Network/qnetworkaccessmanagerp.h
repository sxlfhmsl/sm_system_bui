#pragma once

#include <QNetworkAccessManager>
#include <QJsonObject>

class HttpReply;
class QNetworkReply;
// 重写类
class QNetworkAccessManagerP : public QNetworkAccessManager
{
	Q_OBJECT

signals:
	void signal_json_result(HttpReply*, QJsonObject);

public:
	QNetworkAccessManagerP(QObject *parent = nullptr);
	~QNetworkAccessManagerP();

public slots:
    // 响应发起的get请求
    // params reply: 可能非同线程对象，只作标记（reply_map），禁止调用
    // params url: 地址
    void get(HttpReply* reply, QString url);

	// 响应发起的post请求，普通
	// params reply: 可能非同线程对象，只作标记（reply_map），禁止调用
	// params url: 地址
	// params params: 发送参数
	void post(HttpReply* reply, QString url, QJsonObject params);

	// 响应发起的post请求，上传文件
	// params reply: 可能非同线程对象，只作标记（reply_map），禁止调用
	// params url: 地址
	// params content_type: header头
	// params f_name: 文件名
	void post(HttpReply* reply, QString url, QString content_type, QString f_name);

private:
	// 基础地址
	const QString baseurl = "http://127.0.0.1:5000";

	// 默认header 已存在的，token不存放于此
	QMap<int, QString> default_header;

	// 映射，以便解析完成后传递出去
	QMap<QNetworkReply*, HttpReply*> reply_map;

	// 初始化网络类
	void init_NetworkAccessManager();

	// 分析得到json
	// 返回： json字符串
	QJsonObject parse_to_json(QNetworkReply* reply);

private slots:
    void reply_finished(QNetworkReply* reply);
};
