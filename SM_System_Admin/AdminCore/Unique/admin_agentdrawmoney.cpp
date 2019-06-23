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

void  Admint_AgentDrawMoney::setHorizontalHeaderLabels(const QStringList &labels)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(labels);
}

void Admint_AgentDrawMoney::setItem(const int &row, const int &col, const QVariant &value)
{
	ui->widget_DataGrid->setItem(row, col, value);
}

void Admint_AgentDrawMoney::setIndexWidget(const int &row, const int &col, QWidget* widget)
{
	ui->widget_DataGrid->setIndexWidget(row, col, widget);
}

void Admint_AgentDrawMoney::set_PaginationInfo(int counts)
{
	ui->widget_DataGrid->set_PaginationInfo(counts);
}

void Admint_AgentDrawMoney::clear()
{
	ui->widget_DataGrid->clear();
}

QMap<QString, int> Admint_AgentDrawMoney::count()
{
	return ui->widget_DataGrid->count();
}
