#pragma once

#include "component\widget_base.h"
namespace Ui { class Admin_ManTrading; };

/**
* @brief The Admin_ManTrading class
* @details “手动入/扣款”页面
*/
class Admin_ManTrading : public Widget_Base
{
	Q_OBJECT

public:
	Admin_ManTrading(QWidget *parent = Q_NULLPTR);
	~Admin_ManTrading();

protected:
	//设置headerlabels
	void setHorizontalHeaderLabels(QStringList header);

private:
	Ui::Admin_ManTrading *ui;

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
