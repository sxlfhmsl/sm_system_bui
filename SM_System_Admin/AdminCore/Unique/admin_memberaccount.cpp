#include "admin_memberaccount.h"
#include "ui_admin_memberaccount.h"

Admin_MemberAccount::Admin_MemberAccount(QWidget *parent)
	: Widget_Base(Widget_Base::Admin, parent)
{
	ui = new Ui::Admin_MemberAccount();
	ui->setupUi(this);
	// 初始化界面参数
	this->init_UI();
}

Admin_MemberAccount::~Admin_MemberAccount()
{
	delete ui;
}

void Admin_MemberAccount::init_UI()
{
	this->init_DataGrid();
}

void Admin_MemberAccount::init_DataGrid()
{
	QStringList grid_head;
	grid_head << "代理商" << "账号" << "业务员" << "正式用户" << "客户姓名" << "电话"
		<< "上次登录" << "保证金" << "客户总盈亏" << "银行账户" << "上线状态" << "锁定"
		<< "禁用" << "查看" << "修改" << "删除" << "禁用" << "启用" << "解锁" << "重置密码" << "重置取款密码";
	this->setHorizontalHeaderLabels(grid_head);
}

void  Admin_MemberAccount::setHorizontalHeaderLabels(const QStringList &labels)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(labels);
}

void Admin_MemberAccount::setItem(const int &row, const int &col, const QVariant &value)
{
	ui->widget_DataGrid->setItem(row, col, value);
}

void Admin_MemberAccount::setIndexWidget(const int &row, const int &col, QWidget* widget)
{
	ui->widget_DataGrid->setIndexWidget(row, col, widget);
}

void Admin_MemberAccount::set_PaginationInfo(int counts)
{
	ui->widget_DataGrid->set_PaginationInfo(counts);
}

void Admin_MemberAccount::clear()
{
	ui->widget_DataGrid->clear();
}

QMap<QString, int> Admin_MemberAccount::count()
{
	return ui->widget_DataGrid->count();
}
