#pragma once

#include "Core\widget_userposition.h"

/**
 * @brief The Admin_UserPosition class
 * @details 管理端-----用户持仓
 */
class Admin_UserPosition : public Widget_UserPosition
{
	Q_OBJECT

public:
	Admin_UserPosition(QWidget *parent = Q_NULLPTR);
	~Admin_UserPosition();

private:
	// 创建表格头
	void create_GridHead();
};
