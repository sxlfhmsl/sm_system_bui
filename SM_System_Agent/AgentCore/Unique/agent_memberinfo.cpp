#include "agent_memberinfo.h"
#include "ui_agent_memberinfo.h"

// “会员信息”页面
Agent_MemberInfo::Agent_MemberInfo(QWidget *parent)
	: Widget_Base(System_Type::Agent, parent)
{
	ui = new Ui::Agent_MemberInfo();
	ui->setupUi(this);
	// 初始化界面
	this->init_UI();
}

Agent_MemberInfo::~Agent_MemberInfo()
{
	delete ui;
}

void Agent_MemberInfo::init_UI()
{
	this->init_DataGrid();
}

void Agent_MemberInfo::init_DataGrid()
{
	QStringList grid_head;
	grid_head << "代理商" << "账号" << "业务员" << "客户姓名" << "上次登录" << "保证金"
		<< "银行账户" << "正式用户" << "禁用" << "创建人类型" << "锁定" << "上线状态" << "修改";
	this->setHorizontalHeaderLabels(grid_head);
}

void  Agent_MemberInfo::setHorizontalHeaderLabels(const QStringList &labels)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(labels);
}

void Agent_MemberInfo::setItem(const int &row, const int &col, const QVariant &value)
{
	ui->widget_DataGrid->setItem(row, col, value);
}

void Agent_MemberInfo::setIndexWidget(const int &row, const int &col, QWidget* widget)
{
	ui->widget_DataGrid->setIndexWidget(row, col, widget);
}

void Agent_MemberInfo::set_PaginationInfo(int counts)
{
	ui->widget_DataGrid->set_PaginationInfo(counts);
}

void Agent_MemberInfo::clear()
{
	ui->widget_DataGrid->clear();
}

QMap<QString, int> Agent_MemberInfo::count()
{
	return ui->widget_DataGrid->count();
}
