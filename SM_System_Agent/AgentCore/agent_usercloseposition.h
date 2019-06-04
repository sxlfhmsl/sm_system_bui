#pragma once

#include "Core\widget_usercloseposition.h"

// 代理端-----用户平仓界面
class Agent_UserClosePosition : public Widget_UserClosePosition
{
	Q_OBJECT

public:
	Agent_UserClosePosition(QWidget *parent = Q_NULLPTR);
	~Agent_UserClosePosition();

private:
	// 创建表格头
	void create_GridHead();
};
