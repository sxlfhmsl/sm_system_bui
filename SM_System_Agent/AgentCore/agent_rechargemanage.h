#pragma once

#include "Core\widget_rechargemanage.h"

// 代理端-----充值管理
class Agent_RechargeManage : public Widget_RechargeManage
{
	Q_OBJECT

public:
	Agent_RechargeManage(QWidget *parent = Q_NULLPTR);
	~Agent_RechargeManage();

private:
	// 创建表格头
	void create_GridHead();
};
