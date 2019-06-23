#include "admin_admin.h"
#include "ui_admin_admin.h"

// “管理员”页面
Admin_Admin::Admin_Admin(QWidget *parent)
	: Widget_Base(Widget_Base::Admin, parent)
{
	ui = new Ui::Admin_Admin();
	ui->setupUi(this);
	this->init_UI();
}

Admin_Admin::~Admin_Admin()
{
	delete ui;
}

void Admin_Admin::init_UI()
{
	this->init_DataGrid();
}

void Admin_Admin::init_DataGrid()
{
	QStringList grid_head;
	grid_head << "账号" << "名称" << "注册日期" << "最后登录时间" << "禁用"
		<< "查看" << "修改" << "删除" << "禁用" << "启用" << "重置密码";
	this->setHorizontalHeaderLabels(grid_head);
}

void  Admin_Admin::setHorizontalHeaderLabels(const QStringList &labels)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(labels);
}

void Admin_Admin::setItem(const int &row, const int &col, const QVariant &value)
{
	ui->widget_DataGrid->setItem(row, col, value);
}

void Admin_Admin::setIndexWidget(const int &row, const int &col, QWidget* widget)
{
	ui->widget_DataGrid->setIndexWidget(row, col, widget);
}

void Admin_Admin::set_PaginationInfo(int counts)
{
	ui->widget_DataGrid->set_PaginationInfo(counts);
}

void Admin_Admin::clear()
{
	ui->widget_DataGrid->clear();
}

QMap<QString, int> Admin_Admin::count()
{
	return ui->widget_DataGrid->count();
}
