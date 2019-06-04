#pragma once

#include "Core\widget_clerk.h"

// 代理端-----业务员
class Agent_Clerk : public Widget_Clerk
{
	Q_OBJECT

public:
	Agent_Clerk(QWidget *parent = Q_NULLPTR);
	~Agent_Clerk();

private:
	// 创建表格头
	void create_GridHead();
};
