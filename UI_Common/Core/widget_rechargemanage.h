#pragma once

#include "ui_common_global.h"

#include "component\widget_base.h"

namespace Ui { class Widget_RechargeManage; };

/**
* @brief The Widget_RechargeManage class
* @details “充值管理”页面
*/
class UI_COMMON_EXPORT Widget_RechargeManage : public Widget_Base
{
	Q_OBJECT

public:
	Widget_RechargeManage(System_Type type, QWidget *parent = Q_NULLPTR);
	~Widget_RechargeManage();

protected:
	//设置headerlabels
	void setHorizontalHeaderLabels(QStringList header);

private:
	Ui::Widget_RechargeManage *ui;

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
