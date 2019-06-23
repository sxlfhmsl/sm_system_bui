#include "admin_mantrading.h"
#include "ui_admin_mantrading.h"

//“手动入/扣款”页面
Admin_ManTrading::Admin_ManTrading(QWidget *parent)
	: Widget_Base(System_Type::Admin, parent)
{
	ui = new Ui::Admin_ManTrading();
	ui->setupUi(this);
	// 初始化界面
	this->init_UI();
}

Admin_ManTrading::~Admin_ManTrading()
{
	delete ui;
}

void Admin_ManTrading::init_UI()
{
	this->init_DataGrid();
}

void Admin_ManTrading::init_DataGrid()
{
	QStringList grid_head;
	grid_head << "账号" << "入款/扣款" << "管理员" << "金额" << "创建时间" << "备注";
	this->setHorizontalHeaderLabels(grid_head);
}

void  Admin_ManTrading::setHorizontalHeaderLabels(const QStringList &labels)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(labels);
}

void Admin_ManTrading::setItem(const int &row, const int &col, const QVariant &value)
{
	ui->widget_DataGrid->setItem(row, col, value);
}

void Admin_ManTrading::setIndexWidget(const int &row, const int &col, QWidget* widget)
{
	ui->widget_DataGrid->setIndexWidget(row, col, widget);
}

void Admin_ManTrading::set_PaginationInfo(int counts)
{
	ui->widget_DataGrid->set_PaginationInfo(counts);
}

void Admin_ManTrading::clear()
{
	ui->widget_DataGrid->clear();
}

QMap<QString, int> Admin_ManTrading::count()
{
	return ui->widget_DataGrid->count();
}
