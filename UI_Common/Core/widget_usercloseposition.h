#pragma once

#include "ui_common_global.h"

#include "component\widget_base.h"

namespace Ui { class Widget_UserClosePosition; };

/**
* @brief The Widget_UserClosePosition class
* @details “用户平仓”界面
*/
class UI_COMMON_EXPORT Widget_UserClosePosition : public Widget_Base
{
	Q_OBJECT

public:
	Widget_UserClosePosition(System_Type type, QWidget *parent = Q_NULLPTR);
	~Widget_UserClosePosition();

protected:
	//设置headerlabels
	void setHorizontalHeaderLabels(QStringList header);

private:
	Ui::Widget_UserClosePosition *ui;

private:
	/**
	* @brief init_UI
	* @author 盛录
	* @details 初始化当前窗口
	*/
	void init_UI();

	/**
	* @brief init_DataGrid
	* @author 盛录
	* @details 初始化数据表格
	*/
	void init_DataGrid();
};
