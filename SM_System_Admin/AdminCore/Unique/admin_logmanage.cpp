#include "admin_logmanage.h"
#include "ui_admin_logmanage.h"

// “日志管理”页面
Admin_LogManage::Admin_LogManage(QWidget *parent)
	: Widget_Base(Widget_Base::Admin, parent)
{
	ui = new Ui::Admin_LogManage();
	ui->setupUi(this);
	// 初始化界面
	this->init_UI();
}

Admin_LogManage::~Admin_LogManage()
{
	delete ui;
}


void Admin_LogManage::init_UI()
{
	this->init_DataGrid();
}

void Admin_LogManage::init_DataGrid()
{
	QStringList grid_head;
	grid_head << "选择" << "账号" << "类型" << "模块" << "时间" << "操作记录";
	this->setHorizontalHeaderLabels(grid_head);
}

void  Admin_LogManage::setHorizontalHeaderLabels(QStringList header)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(header);
}