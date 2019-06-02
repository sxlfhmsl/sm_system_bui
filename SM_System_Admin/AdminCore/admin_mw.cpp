#include "admin_mw.h"
#include "component\m_menu.h"
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
	QList<M_Menu *> menu;
	menu << new M_Menu("用户管理") << new M_Menu("报表统计") << new M_Menu("款项相关") << new M_Menu("报表统计");
	*menu[0] << "数据汇总" << "会员账号" << "代理账号" << "管理员" << "业务员" << "日志管理";
	*menu[1] << "用户持仓" << "用户平仓" << "交易账单";
	*menu[2] << "手动入/扣款" << "资金明细" << "充值管理" << "代理提款" << "会员提款";
	*menu[3] << "公告管理" << "休市安排" << "股票管理" << "系统设置" << "交易规则";
	((Admin_Main*)this->widget_Main)->init_Menu(menu);
}
