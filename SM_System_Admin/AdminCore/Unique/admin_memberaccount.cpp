#include "admin_memberaccount.h"
#include "ui_admin_memberaccount.h"

Admin_MemberAccount::Admin_MemberAccount(QWidget *parent)
	: Widget_Base(Widget_Base::Admin, parent)
{
	ui = new Ui::Admin_MemberAccount();
	ui->setupUi(this);
	// 初始化界面参数
	this->init_Widget();
}

Admin_MemberAccount::~Admin_MemberAccount()
{
	delete ui;
}

void Admin_MemberAccount::init_Widget()
{
	this->init_DataGrid();
}

void Admin_MemberAccount::init_DataGrid()
{
	QStringList grid_head;
	grid_head << "代理商" << "账号" << "业务员" << "正式用户" << "客户姓名" << "电话"
		<< "上次登录" << "保证金" << "客户总盈亏" << "银行账户" << "上线状态" << "锁定"
		<< "禁用" << "查看" << "修改" << "删除" << "禁用" << "启用" << "解锁" << "重置密码" << "重置取款密码";
	ui->widget_DataGrid->setHorizontalHeaderLabels(grid_head);
}
