#include "agent_changepass.h"
#include "ui_agent_changepass.h"

// 代理端-----修改密码
Agent_ChangePass::Agent_ChangePass(QWidget *parent)
	: Dialog_Base(parent)
{
	ui = new Ui::Agent_ChangePass();
	ui->setupUi(this);
	// 初始化界面
	this->init_UI();
}

Agent_ChangePass::~Agent_ChangePass()
{
	delete ui;
}

void Agent_ChangePass::init_UI()
{
	this->setWindowTitle("融易通代理端-----修改密码");
	this->setFixedSize(this->width(), this->height());
}
