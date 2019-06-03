#pragma once

#include "Core\widget_rechargemanage.h"

// 管理端-----充值管理
class Admin_RechargeManage : public Widget_RechargeManage
{
	Q_OBJECT

public:
	Admin_RechargeManage(QWidget *parent = Q_NULLPTR);
	~Admin_RechargeManage();

private:
	// 创建表格头
	void create_GridHead();
};
