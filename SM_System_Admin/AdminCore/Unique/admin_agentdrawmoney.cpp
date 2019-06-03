#include "admin_agentdrawmoney.h"
#include "ui_admin_agentdrawmoney.h"

// “代理提款”页面
Admint_AgentDrawMoney::Admint_AgentDrawMoney(QWidget *parent)
	: Widget_Base(System_Type::Admin, parent)
{
	ui = new Ui::Admint_AgentDrawMoney();
	ui->setupUi(this);
	// 初始化界面
	this->init_UI();
}

Admint_AgentDrawMoney::~Admint_AgentDrawMoney()
{
	delete ui;
}

void Admint_AgentDrawMoney::init_UI()
{
	this->init_DataGrid();
}

void Admint_AgentDrawMoney::init_DataGrid()
{
	QStringList grid_head;
	grid_head << "账户名" << "代理账户" << "提款日期" << "提款金额" << "银行" << "开户行"
		<< "银行账户" << "提款账户" << "处理时间" << "通过" << "不通过";
	this->setHorizontalHeaderLabels(grid_head);
}

void  Admint_AgentDrawMoney::setHorizontalHeaderLabels(QStringList header)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(header);
}
