#include "admin_login.h"
#include "Unique\admin_singleton.h"
#include <QJsonDocument>
#include <QJsonObject>

//股票后台 登录
Admin_Login::Admin_Login(QWidget *parent)
	: Widget_Login(Widget_Base::Admin, parent)
{
	this->setObjectName("Admin_Login");
}

Admin_Login::~Admin_Login()
{
}

void Admin_Login::check_LoginInfo(QString u_name, QString u_pass)
{
	emit signal_LoginSuccess(u_name);
}
