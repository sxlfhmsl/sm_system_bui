#pragma once

#include "Core\widget_main.h"

/**
* @brief The Agent_Main class
* @details 股票后台 主要功能界面 代理
*/
class Agent_Main : public Widget_Main
{
	Q_OBJECT

public:
	Agent_Main(QWidget *parent = Q_NULLPTR);
	~Agent_Main();
};
