#pragma once

#include "component\widget_base.h"
namespace Ui { class Admin_SystemSetting; };

/**
* @brief The Admin_SystemSetting class
* @details “系统设置”页面
*/
class Admin_SystemSetting : public Widget_Base
{
	Q_OBJECT

public:
	Admin_SystemSetting(QWidget *parent = Q_NULLPTR);
	~Admin_SystemSetting();

private:
	Ui::Admin_SystemSetting *ui;

private:
	/**
	* @brief init_Widget
	* @author 盛录
	* @details 初始化当前窗口
	*/
	void init_UI();
};
