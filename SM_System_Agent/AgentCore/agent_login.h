#pragma once

#include "Core\widget_login.h"

/**
* @brief The Agent_Main class
* @details 股票后台 登录界面 代理
*/
class Agent_Login : public Widget_Login
{
	Q_OBJECT

public:
	Agent_Login(QWidget *parent = Q_NULLPTR);
	~Agent_Login();

protected:
	// 验证码校验成功则调用此方法进行登录校验
	void check_LoginInfo(QString u_name, QString u_pass);
};
