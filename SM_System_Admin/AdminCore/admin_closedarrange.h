#pragma once

#include "Core\widget_closedarrange.h"

// 管理端-----休市安排
class Admin_ClosedArrange : public Widget_ClosedArrange
{
	Q_OBJECT

public:
	Admin_ClosedArrange(QWidget *parent = Q_NULLPTR);
	~Admin_ClosedArrange();

private:
	// 创建表格头
	void create_GridHead();
};
