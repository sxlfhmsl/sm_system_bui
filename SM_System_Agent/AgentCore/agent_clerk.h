#pragma once

#include "Core\widget_clerk.h"

class HttpReply;
// 代理端-----业务员
class Agent_Clerk : public Widget_Clerk
{
	Q_OBJECT

public:
	Agent_Clerk(QWidget *parent = Q_NULLPTR);
	~Agent_Clerk();

private:
	// 更新clerk Reply
	HttpReply* reply_Update_Clerk = nullptr;
	// 创建表格头
	void create_GridHead();

private slots:
    // 更新表
	void slot_Finished_Update_Clerk();
};
