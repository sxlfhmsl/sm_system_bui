#pragma once

#include <QObject>
#include <QJsonObject>

#include "common_global.h"

class QNetworkReply;
/**
 * @brief The HttpReply class
 * @details Http回复类
 */
class COMMON_EXPORT HttpReply : public QObject
{
	Q_OBJECT

signals:
	// 接收json送出此信号
	void finshed();

public:
	HttpReply(QNetworkReply* reply, QObject *parent = nullptr);
	~HttpReply();

	// 响应结束后得到结果parse_json
	QJsonObject& get_parse_json();

private:
	// 回复类
	QNetworkReply* reply = nullptr;

	// 结束后的参数结果保存地方
	// 数据结构{code: int(10000以下为异常代码无数据只有错误原因), data: 数据, msg:消息}
	QJsonObject parse_json;


	// 分析得到json
	// 返回： json字符串
	QJsonObject parse_to_json();

private slots:
    // 接收完成信号
    void slot_recv_finished();
};
