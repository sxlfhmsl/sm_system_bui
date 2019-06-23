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

void  Widget_FundsDetails::setHorizontalHeaderLabels(const QStringList &labels)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(labels);
}

void Widget_FundsDetails::setItem(const int &row, const int &col, const QVariant &value)
{
	ui->widget_DataGrid->setItem(row, col, value);
}

void Widget_FundsDetails::setIndexWidget(const int &row, const int &col, QWidget* widget)
{
	ui->widget_DataGrid->setIndexWidget(row, col, widget);
}

void Widget_FundsDetails::set_PaginationInfo(int counts)
{
	ui->widget_DataGrid->set_PaginationInfo(counts);
}

void Widget_FundsDetails::clear()
{
	ui->widget_DataGrid->clear();
}

QMap<QString, int> Widget_FundsDetails::count()
{
	return ui->widget_DataGrid->count();
}
