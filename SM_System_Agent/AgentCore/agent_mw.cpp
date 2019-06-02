#include "agent_mw.h"
#include "component\m_menu.h"
#include "AgentCore\agent_login.h"
#include "AgentCore\agent_main.h"

// 股票后台 主界面 代理
Agent_MW::Agent_MW(QWidget *parent)
	: SM_MainWindow("融易通代理端", parent)
{
	this->setObjectName("Agent_MW");
	this->init_MainWindow();
}

Agent_MW::~Agent_MW()
{
}

void Agent_MW::create_Login()
{
	this->widget_Login = new Agent_Login();
}

void Agent_MW::create_Main()
{
	this->widget_Main = new Agent_Main();
	QList<M_Menu *> menu;
	menu << new M_Menu("用户管理") << new M_Menu("报表统计") << new M_Menu("其他功能") << new M_Menu("增值服务");
	*menu[0] << "数据汇总" << "账户信息" << "会员信息" << "业务员";
	*menu[1] << "用户持仓" << "用户平仓" << "交易账单" << "资金明细" << "提款申请" << "会员提款" << "充值管理";
	*menu[2] << "公告管理" << "休市安排" << "修改密码" << "交易规则";
	*menu[3] << "短信服务";
	((Agent_Main*)this->widget_Main)->init_Menu(menu);
}
