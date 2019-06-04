#include "agent_smsservice.h"
#include "ui_agent_smsservice.h"

// “短信服务”页面
Agent_SMSService::Agent_SMSService(QWidget *parent)
	: Widget_Base(System_Type::Agent, parent)
{
	ui = new Ui::Agent_SMSService();
	ui->setupUi(this);
	// 初始化界面
	this->init_UI();
}

Agent_SMSService::~Agent_SMSService()
{
	delete ui;
}

void Agent_SMSService::init_UI()
{
}