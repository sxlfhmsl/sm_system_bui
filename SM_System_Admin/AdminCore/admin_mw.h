#pragma once

#include "Core\sm_mainwindow.h"

/**
 * @brief The Admin_MW class
 * @details 股票后台 主界面 管理员
 */
class Admin_MW : public SM_MainWindow
{
	Q_OBJECT

public:
	Admin_MW(QWidget *parent = Q_NULLPTR);
	~Admin_MW();

protected:
	// 初始化登录界面
	void create_Login();
	// 初始化主界面
	void create_Main();
};
