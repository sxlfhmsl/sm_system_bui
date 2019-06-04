#pragma once

#include "Core\widget_userposition.h"

/**
* @brief The Agent_UserPosition class
* @details 代理端-----用户持仓
*/
class Agent_UserPosition : public Widget_UserPosition
{
	Q_OBJECT

public:
	Agent_UserPosition(QWidget *parent = Q_NULLPTR);
	~Agent_UserPosition();

private:
	// 创建表格头
	void create_GridHead();
};
