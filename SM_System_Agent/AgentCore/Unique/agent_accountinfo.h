#pragma once

#include "component\widget_base.h"
namespace Ui { class Agent_AccountInfo; };

/**
* @brief The Agent_AccountInfo class
* @details “账户信息”页面
*/
class Agent_AccountInfo : public Widget_Base
{
	Q_OBJECT

public:
	Agent_AccountInfo(QWidget *parent = Q_NULLPTR);
	~Agent_AccountInfo();

private:
	Ui::Agent_AccountInfo *ui;

private:
	/**
	* @brief init_UI
	* @author 盛录
	* @details 初始化当前窗口
	*/
	void init_UI();
};
