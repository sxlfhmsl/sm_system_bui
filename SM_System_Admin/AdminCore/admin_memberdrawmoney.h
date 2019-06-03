#pragma once

#include "Core\widget_memberdrawmoney.h"

// 管理员-----会员提款
class Admin_MemberDrawMoney : public Widget_MemberDrawMoney
{
	Q_OBJECT

public:
	Admin_MemberDrawMoney(QWidget *parent = Q_NULLPTR);
	~Admin_MemberDrawMoney();

private:
	// 创建表格头
	void create_GridHead();
};
