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

void  Widget_TradingBill::setHorizontalHeaderLabels(const QStringList &labels)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(labels);
}

void Widget_TradingBill::setItem(const int &row, const int &col, const QVariant &value)
{
	ui->widget_DataGrid->setItem(row, col, value);
}

void Widget_TradingBill::setIndexWidget(const int &row, const int &col, QWidget* widget)
{
	ui->widget_DataGrid->setIndexWidget(row, col, widget);
}

void Widget_TradingBill::set_PaginationInfo(int counts)
{
	ui->widget_DataGrid->set_PaginationInfo(counts);
}

void Widget_TradingBill::clear()
{
	ui->widget_DataGrid->clear();
}

QMap<QString, int> Widget_TradingBill::count()
{
	return ui->widget_DataGrid->count();
}
