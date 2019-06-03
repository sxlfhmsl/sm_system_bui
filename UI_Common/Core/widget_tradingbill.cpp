#include "widget_tradingbill.h"
#include "ui_widget_tradingbill.h"

// “交易账单”页面
Widget_TradingBill::Widget_TradingBill(System_Type type, QWidget *parent)
	: Widget_Base(type, parent)
{
	ui = new Ui::Widget_TradingBill();
	ui->setupUi(this);
	//初始化界面
	this->init_UI();
}

Widget_TradingBill::~Widget_TradingBill()
{
	delete ui;
}

void Widget_TradingBill::init_UI()
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

void Widget_TradingBill::init_DataGrid()
{
}

void  Widget_TradingBill::setHorizontalHeaderLabels(QStringList header)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(header);
}
