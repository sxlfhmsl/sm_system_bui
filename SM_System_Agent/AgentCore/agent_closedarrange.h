#pragma once

#include "Core\widget_closedarrange.h"

// 代理端-----休市安排
class Agent_ClosedArrange : public Widget_ClosedArrange
{
	Q_OBJECT

public:
	Agent_ClosedArrange(QWidget *parent = Q_NULLPTR);
	~Agent_ClosedArrange();

private:
	// 创建表格头
	void create_GridHead();
};
