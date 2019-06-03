#include "widget_fundsdetails.h"
#include "ui_widget_fundsdetails.h"

// “资金明细”界面
Widget_FundsDetails::Widget_FundsDetails(System_Type type, QWidget *parent)
	: Widget_Base(type, parent)
{
	ui = new Ui::Widget_FundsDetails();
	ui->setupUi(this);
	// 初始化界面
	this->init_UI();
}

Widget_FundsDetails::~Widget_FundsDetails()
{
	delete ui;
}

void Widget_FundsDetails::init_UI()
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

void Widget_FundsDetails::init_DataGrid()
{
}

void  Widget_FundsDetails::setHorizontalHeaderLabels(QStringList header)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(header);
}
