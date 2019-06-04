#include "agent_withdrawfunds.h"
#include "ui_agent_withdrawfunds.h"

// “提款申请”页面
Agent_WithdrawFunds::Agent_WithdrawFunds(QWidget *parent)
	: Widget_Base(System_Type::Agent, parent)
{
	ui = new Ui::Agent_WithdrawFunds();
	ui->setupUi(this);
	// 刷新界面
	this->init_UI();
}

Agent_WithdrawFunds::~Agent_WithdrawFunds()
{
	delete ui;
}

void Agent_WithdrawFunds::init_UI()
{
	this->init_DataGrid();
}

void Agent_WithdrawFunds::init_DataGrid()
{
	QStringList grid_head;
	grid_head << "代理账号" << "账户名" << "提款日期" << "提款金额" << "银行" << "开户行"
		<< "银行账户" << "提款状态" << "处理时间" << "撤销";
	this->setHorizontalHeaderLabels(grid_head);
}

void  Agent_WithdrawFunds::setHorizontalHeaderLabels(QStringList header)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(header);
}
