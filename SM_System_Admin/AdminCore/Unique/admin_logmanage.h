#pragma once

#include "component\widget_base.h"

namespace Ui { class Admin_LogManage; };

/**
 * @brief The Admin_LogManage class
 * @details “日志管理”页面
 */
class Admin_LogManage : public Widget_Base
{
	Q_OBJECT

public:
	Admin_LogManage(QWidget *parent = Q_NULLPTR);
	~Admin_LogManage();

protected:
	//设置headerlabels
	void setHorizontalHeaderLabels(QStringList header);

private:
	Ui::Admin_LogManage *ui;

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
