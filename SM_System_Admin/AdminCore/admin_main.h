#pragma once

#include "Core\widget_main.h"

/**
* @brief The Admin_Main class
* @details 股票后台 主要功能界面
*/
class Admin_Main : public Widget_Main
{
	Q_OBJECT

public:
	Admin_Main(QWidget *parent = Q_NULLPTR);
	~Admin_Main();

protected:
	/**
	* @brief switch_TabWidget
	* @author 盛录
	* @return 如果新建界面返回true
	* @details 切换并创建对应窗口
	*/
	bool switch_TabWidget(QString tab_name);
};
