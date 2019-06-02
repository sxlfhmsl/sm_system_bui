#pragma once

#include "ui_common_global.h"

#include "component\widget_base.h"

namespace Ui { class Widget_Clerk; };

/**
 * @brief The Widget_Clerk class
 * @details “业务员”界面
 */
class UI_COMMON_EXPORT Widget_Clerk : public Widget_Base
{
	Q_OBJECT

public:
	Widget_Clerk(QWidget *parent = Q_NULLPTR);
	~Widget_Clerk();

protected:
	//设置headerlabels
	void setHorizontalHeaderLabels(QStringList header);

private:
	Ui::Widget_Clerk *ui;

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
