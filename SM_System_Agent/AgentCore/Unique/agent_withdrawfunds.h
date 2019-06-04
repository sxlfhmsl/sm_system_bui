#pragma once

#include "component\widget_base.h"
namespace Ui { class Agent_WithdrawFunds; };

/**
* @brief The Agent_WithdrawFunds class
* @details “提款申请”页面
*/
class Agent_WithdrawFunds : public Widget_Base
{
	Q_OBJECT

public:
	Agent_WithdrawFunds(QWidget *parent = Q_NULLPTR);
	~Agent_WithdrawFunds();

protected:
	//设置headerlabels
	void setHorizontalHeaderLabels(QStringList header);

private:
	Ui::Agent_WithdrawFunds *ui;

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
