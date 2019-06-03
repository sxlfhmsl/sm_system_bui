#pragma once

#include "ui_common_global.h"

#include "component\widget_base.h"

namespace Ui { class Widget_FundsDetails; };

/**
* @brief The Widget_FundsDetails class
* @details “资金明细”界面
*/
class UI_COMMON_EXPORT Widget_FundsDetails : public Widget_Base
{
	Q_OBJECT

public:
	Widget_FundsDetails(System_Type type, QWidget *parent = Q_NULLPTR);
	~Widget_FundsDetails();

protected:
	//设置headerlabels
	void setHorizontalHeaderLabels(QStringList header);

private:
	Ui::Widget_FundsDetails *ui;

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
