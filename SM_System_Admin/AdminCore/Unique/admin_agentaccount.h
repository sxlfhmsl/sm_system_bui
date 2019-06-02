#pragma once

#include "component\widget_base.h"
namespace Ui { class Admin_AgentAccount; };

/**
 * @brief The Widget_Agent_Account class
 * @details “代理账户”界面
 */
class Admin_AgentAccount : public Widget_Base
{
	Q_OBJECT

public:
	Admin_AgentAccount(QWidget *parent = Q_NULLPTR);
	~Admin_AgentAccount();

protected:
	//设置headerlabels
	void setHorizontalHeaderLabels(QStringList header);

private:
	Ui::Admin_AgentAccount *ui;

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
