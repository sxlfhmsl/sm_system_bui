#include "agent_accountinfo.h"
#include "ui_agent_accountinfo.h"

// “账户信息”页面
Agent_AccountInfo::Agent_AccountInfo(QWidget *parent)
	: Widget_Base(System_Type::Agent, parent)
{
	ui = new Ui::Agent_AccountInfo();
	ui->setupUi(this);
	// 初始化界面
	this->init_UI();
}

Agent_AccountInfo::~Agent_AccountInfo()
{
	delete ui;
}

void Agent_AccountInfo::init_UI()
{
}
