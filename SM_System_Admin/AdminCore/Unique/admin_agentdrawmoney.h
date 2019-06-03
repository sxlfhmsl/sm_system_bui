#pragma once

#include "component\widget_base.h"
namespace Ui { class Admint_AgentDrawMoney; };

/**
* @brief The Admint_AgentDrawMoney class
* @details “代理提款”页面
*/
class Admint_AgentDrawMoney : public Widget_Base
{
	Q_OBJECT

public:
	Admint_AgentDrawMoney(QWidget *parent = Q_NULLPTR);
	~Admint_AgentDrawMoney();

protected:
	//设置headerlabels
	void setHorizontalHeaderLabels(QStringList header);

private:
	Ui::Admint_AgentDrawMoney *ui;

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
