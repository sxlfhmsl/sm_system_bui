#include "widget_clerk.h"
#include "ui_widget_clerk.h"

// “业务员”界面
Widget_Clerk::Widget_Clerk(System_Type type, QWidget *parent)
	: Widget_Base(type, parent)
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

void  Widget_Clerk::setHorizontalHeaderLabels(const QStringList &labels)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(labels);
}

void Widget_Clerk::setItem(const int &row, const int &col, const QVariant &value)
{
	ui->widget_DataGrid->setItem(row, col, value);
}

void Widget_Clerk::setIndexWidget(const int &row, const int &col, QWidget* widget)
{
	ui->widget_DataGrid->setIndexWidget(row, col, widget);
}

void Widget_Clerk::clear()
{
	ui->widget_DataGrid->clear();
}

QMap<QString, int> Widget_Clerk::count()
{
	return ui->widget_DataGrid->count();
}
