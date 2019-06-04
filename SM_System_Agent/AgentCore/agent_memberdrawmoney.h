#pragma once

#include "Core\widget_memberdrawmoney.h"

// 代理端-----会员提款
class Agent_MemberDrawMoney : public Widget_MemberDrawMoney
{
	Q_OBJECT

public:
	Agent_MemberDrawMoney(QWidget *parent = Q_NULLPTR);
	~Agent_MemberDrawMoney();

private:
	// 创建表格头
	void create_GridHead();
};
