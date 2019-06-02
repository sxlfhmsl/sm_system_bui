#pragma once

#include "component\widget_base.h"

namespace Ui { class Admin_MemberAccount; };

/**
* @brief The Widget_Vip_Account class
* @details 会员账户界面
*/
class Admin_MemberAccount : public Widget_Base
{
	Q_OBJECT

public:
	Admin_MemberAccount(QWidget *parent = Q_NULLPTR);
	~Admin_MemberAccount();

protected:
	//设置headerlabels
	void setHorizontalHeaderLabels(QStringList header);

private:
	Ui::Admin_MemberAccount *ui;

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