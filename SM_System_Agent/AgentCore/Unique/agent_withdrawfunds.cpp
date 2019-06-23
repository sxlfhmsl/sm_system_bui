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

void  Agent_WithdrawFunds::setHorizontalHeaderLabels(const QStringList &labels)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(labels);
}

void Agent_WithdrawFunds::setItem(const int &row, const int &col, const QVariant &value)
{
	ui->widget_DataGrid->setItem(row, col, value);
}

void Agent_WithdrawFunds::setIndexWidget(const int &row, const int &col, QWidget* widget)
{
	ui->widget_DataGrid->setIndexWidget(row, col, widget);
}

void Agent_WithdrawFunds::set_PaginationInfo(int counts)
{
	ui->widget_DataGrid->set_PaginationInfo(counts);
}

void Agent_WithdrawFunds::clear()
{
	ui->widget_DataGrid->clear();
}

QMap<QString, int> Agent_WithdrawFunds::count()
{
	return ui->widget_DataGrid->count();
}
