#include "admin_agentaccount.h"
#include "ui_admin_agentaccount.h"

//“代理账户”界面
Admin_AgentAccount::Admin_AgentAccount(QWidget *parent)
	: Widget_Base(Widget_Base::Admin, parent)
{
	ui = new Ui::Admin_AgentAccount();
	ui->setupUi(this);
	// 初始化界面参数
	this->init_UI();
}

Admin_AgentAccount::~Admin_AgentAccount()
{
	delete ui;
}

void Admin_AgentAccount::init_UI()
{
	this->init_DataGrid();
}

void Admin_AgentAccount::init_DataGrid()
{
	QStringList grid_head;
	grid_head << "正式用户" << "名称" << "保证金" << "测试保证金" << "上次登录" << "限制会员数"
		<< "人民币与股币兑换" << "交易佣金分成" << "上线状态" << "禁用" << "锁定"
		<< "查看" << "修改" << "删除" << "禁用" << "启用" << "解锁" << "重置密码" << "重置取款密码";
	this->setHorizontalHeaderLabels(grid_head);
}

void  Admin_AgentAccount::setHorizontalHeaderLabels(const QStringList &labels)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(labels);
}

void Admin_AgentAccount::setItem(const int &row, const int &col, const QVariant &value)
{
	ui->widget_DataGrid->setItem(row, col, value);
}

void Admin_AgentAccount::setIndexWidget(const int &row, const int &col, QWidget* widget)
{
	ui->widget_DataGrid->setIndexWidget(row, col, widget);
}

void Admin_AgentAccount::set_PaginationInfo(int counts)
{
	ui->widget_DataGrid->set_PaginationInfo(counts);
}

void Admin_AgentAccount::clear()
{
	ui->widget_DataGrid->clear();
}

QMap<QString, int> Admin_AgentAccount::count()
{
	return ui->widget_DataGrid->count();
}
