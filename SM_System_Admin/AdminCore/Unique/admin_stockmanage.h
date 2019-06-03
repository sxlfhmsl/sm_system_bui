#pragma once

#include "component\widget_base.h"
namespace Ui { class Admin_StockManage; };

/**
* @brief The Admin_StockManage class
* @details “股票管理”页面
*/
class Admin_StockManage : public Widget_Base
{
	Q_OBJECT

public:
	Admin_StockManage(QWidget *parent = Q_NULLPTR);
	~Admin_StockManage();

protected:
	//设置headerlabels
	void setHorizontalHeaderLabels(QStringList header);

private:
	Ui::Admin_StockManage *ui;

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
