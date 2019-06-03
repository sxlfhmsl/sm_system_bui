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

void  Admin_ManTrading::setHorizontalHeaderLabels(QStringList header)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(header);
}

