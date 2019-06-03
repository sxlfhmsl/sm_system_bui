#include "widget_closed_arrange.h"
#include "ui_widget_closed_arrange.h"

// “休市安排”页面
Widget_Closed_Arrange::Widget_Closed_Arrange(QWidget *parent)
	: QWidget(parent)
{
	ui = new Ui::Widget_Closed_Arrange();
	ui->setupUi(this);
	// 初始化界面
	this->init_Widget();
}

Widget_Closed_Arrange::~Widget_Closed_Arrange()
{
	delete ui;
}

void Widget_Closed_Arrange::init_Widget()
{
	this->init_DataGrid();
}

void Widget_Closed_Arrange::init_DataGrid()
{
	QStringList grid_head;
	grid_head << "管理员" << "休市日期" << "创建时间" << "备注" << "删除";
	ui->widget_DataGrid->setHorizontalHeaderLabels(grid_head);
}
