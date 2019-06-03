#pragma once

#include "ui_common_global.h"

#include "component\widget_base.h"

namespace Ui { class Widget_MemberDrawMoney; };

/**
* @brief The Widget_MemberDrawMoney class
* @details “会员提款”界面
*/
class UI_COMMON_EXPORT Widget_MemberDrawMoney : public Widget_Base
{
	Q_OBJECT

public:
	Widget_MemberDrawMoney(System_Type type, QWidget *parent = Q_NULLPTR);
	~Widget_MemberDrawMoney();

protected:
	//设置headerlabels
	void setHorizontalHeaderLabels(QStringList header);

private:
	Ui::Widget_MemberDrawMoney *ui;

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
