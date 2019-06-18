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

void  Widget_Clerk::setHorizontalHeaderLabels(const QStringList &header)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(header);
}

void Widget_Clerk::setHorizontalHeaderLabels(const QStringList &header, const QStringList &names)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(header, names);
}

void Widget_Clerk::setGridData(const QJsonObject &data)
{
	if (data.contains("data"))
	{
		ui->widget_DataGrid->setGridData(data.value("data").toObject());
	}
}
