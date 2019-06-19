#pragma once

#include <QObject>
#include <QJsonObject>

#include "common_global.h"

/**
 * @brief The HttpReply class
 * @details Http回复类,需自行删除 delete
 */
class COMMON_EXPORT HttpReply : public QObject
{
	Q_OBJECT

signals:
	// 接收json送出此信号
	void finished();

public:
	HttpReply(QObject *parent = nullptr);
	~HttpReply();

	// 响应结束后得到结果parse_json
	QJsonObject& get_parse_json();

	// 设置响应结束后得到结果parse_json
	void set_parse_json(QJsonObject parse_json);

private:

	// 结束后的参数结果保存地方
	// 数据结构 ----- 本地服务请求{code: int(1-10000为系统默认， 0请求成功), data: 数据, msg:消息}
	// 如需请求外部-----格式会有所变化
	QJsonObject parse_json;
};
