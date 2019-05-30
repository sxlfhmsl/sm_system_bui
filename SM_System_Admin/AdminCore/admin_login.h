#pragma once

#include "Core\widget_login.h"

/**
* @brief The Admin_Login class
* @details 股票后台 登录
*/
class Admin_Login : public Widget_Login
{
	Q_OBJECT

public:
	Admin_Login(QWidget *parent = Q_NULLPTR);
	~Admin_Login();

protected:
	// 验证码校验成功则调用此方法进行登录校验
	void check_LoginInfo(QString u_name, QString u_pass);
};
