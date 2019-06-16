#pragma once

#include <QObject>
#include <QJsonObject>

class QNetworkReply;
/**
 * @brief The HttpReply class
 * @details Http回复类
 */
class HttpReply : public QObject
{
	Q_OBJECT

signals:
	// 接收json送出此信号
	// params recv : 接收后解析成功的参数
	void finshed_json(QJsonObject &recv);

public:
	HttpReply(QNetworkReply* reply, QObject *parent = nullptr);
	~HttpReply();

private:
	// 回复类
	QNetworkReply* reply = nullptr;

	// 分析得到json
	// 返回： json字符串
	QJsonObject parse_to_json();

private slots:
    // 接收完成信号
    void slot_recv_finished();
};
