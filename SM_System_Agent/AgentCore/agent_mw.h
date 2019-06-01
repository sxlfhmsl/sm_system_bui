#pragma once

#include "Core\sm_mainwindow.h"

/**
 * @brief The Agent_MW class
 * @details 股票后台 主界面 代理
 */
class Agent_MW : public SM_MainWindow
{
	Q_OBJECT

public:
	Agent_MW(QWidget *parent = Q_NULLPTR);
	~Agent_MW();

protected:
	// 初始化登录界面
	void create_Login();
	// 初始化主界面
	void create_Main();
};
