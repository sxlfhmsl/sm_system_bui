#pragma once

#include "Core\widget_usercloseposition.h"

// 管理端-----用户平仓界面
class Admin_UserClosePosition : public Widget_UserClosePosition
{
	Q_OBJECT

public:
	Admin_UserClosePosition(QWidget *parent = Q_NULLPTR);
	~Admin_UserClosePosition();

private:
	// 创建表格头
	void create_GridHead();
};
