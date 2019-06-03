#pragma once

#include "Core\widget_clerk.h"

// 管理端-----业务员
class Admin_Clerk : public Widget_Clerk
{
	Q_OBJECT

public:
	Admin_Clerk(QWidget *parent = Q_NULLPTR);
	~Admin_Clerk();

private:
	// 创建表格头
	void create_GridHead();
};
