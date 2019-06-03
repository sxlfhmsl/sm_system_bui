#pragma once

#include "ui_common_global.h"

#include "component\widget_base.h"

namespace Ui { class Widget_UserPosition; };

/**
* @brief The Widget_UserPosition class
* @details “用户持仓”页面
*/
class UI_COMMON_EXPORT Widget_UserPosition : public Widget_Base
{
	Q_OBJECT

public:
	Widget_UserPosition(System_Type type, QWidget *parent = Q_NULLPTR);
	~Widget_UserPosition();

protected:
	//设置headerlabels
	void setHorizontalHeaderLabels(QStringList header);

private:
	Ui::Widget_UserPosition *ui;

private:
	/**
	* @brief init_Widget
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
