#include "widget_clerk.h"
#include "ui_widget_clerk.h"

// “业务员”界面
Widget_Clerk::Widget_Clerk(QWidget *parent)
	: Widget_Base(Widget_Base::Admin, parent)
{
	ui = new Ui::Widget_Clerk();
	ui->setupUi(this);
	// 初始化界面
	this->init_UI();
}

Widget_Clerk::~Widget_Clerk()
{
	delete ui;
}

void Widget_Clerk::init_UI()
{
	switch (this->current_Type)
	{
	case Widget_Base::Admin:
		break;
	case Widget_Base::Agent:
		break;
	}
	this->init_DataGrid();
}

void Widget_Clerk::init_DataGrid()
{
}

void  Widget_Clerk::setHorizontalHeaderLabels(QStringList header)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(header);
}