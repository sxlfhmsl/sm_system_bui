#pragma once

#include "component\widget_base.h"
namespace Ui { class Agent_SMSService; };

/**
* @brief The Widget_SMS_Service class
* @details “短信服务”页面
*/
class Agent_SMSService : public Widget_Base
{
	Q_OBJECT

public:
	Agent_SMSService(QWidget *parent = Q_NULLPTR);
	~Agent_SMSService();

private:
	Ui::Agent_SMSService *ui;

private:
	/**
	* @brief init_UI
	* @author 盛录
	* @details 初始化当前窗口
	*/
	void init_UI();
};
