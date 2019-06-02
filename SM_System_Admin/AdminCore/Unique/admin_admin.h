#pragma once

#include "component\widget_base.h"
namespace Ui { class Admin_Admin; };

/**
 * @brief The Widget_Admin class
 * @details “管理员”页面
 */
class Admin_Admin : public Widget_Base
{
	Q_OBJECT

public:
	Admin_Admin(QWidget *parent = Q_NULLPTR);
	~Admin_Admin();

protected:
	//设置headerlabels
	void setHorizontalHeaderLabels(QStringList header);

private:
	Ui::Admin_Admin *ui;

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
