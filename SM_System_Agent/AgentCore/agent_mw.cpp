#include "agent_mw.h"

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
}
