#pragma once

#include "component\widget_base.h"
namespace Ui { class Agent_MemberInfo; };

/**
* @brief The Agent_MemberInfo class
* @details “会员信息”页面
*/
class Agent_MemberInfo : public Widget_Base
{
	Q_OBJECT

public:
	Agent_MemberInfo(QWidget *parent = Q_NULLPTR);
	~Agent_MemberInfo();

protected:
	//设置headerlabels
	void setHorizontalHeaderLabels(QStringList header);

private:
	Ui::Agent_MemberInfo *ui;

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
