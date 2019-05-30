#include "admin_mw.h"
#include "AdminCore\admin_login.h"
#include "AdminCore\admin_main.h"

// 股票后台 主界面 管理员
Admin_MW::Admin_MW(QWidget *parent)
	: SM_MainWindow("融易通管理端", parent)
{
	this->setObjectName("Admin_MW");
	this->init_MainWindow();
}

Admin_MW::~Admin_MW()
{
}

void Admin_MW::create_Login()
{
	this->widget_Login = new Admin_Login();
}

void Admin_MW::create_Main()
{
	this->widget_Main = new Admin_Main();
}
