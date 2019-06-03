#include "widget_closedarrange.h"
#include "ui_widget_closedarrange.h"

// “休市安排”页面
Widget_ClosedArrange::Widget_ClosedArrange(System_Type type, QWidget *parent)
	: Widget_Base(type, parent)
{
	ui = new Ui::Widget_ClosedArrange();
	ui->setupUi(this);
	// 初始化界面
	this->init_UI();
}

Widget_ClosedArrange::~Widget_ClosedArrange()
{
	delete ui;
}

void Widget_ClosedArrange::init_UI()
{
	switch (this->current_Type)
	{
	case System_Type::Admin:
		break;
	case System_Type::Agent:
		delete ui->pushButton_AddArrange;
		ui->pushButton_AddArrange = nullptr;
		delete ui->horizontalSpacer;
		ui->horizontalSpacer = nullptr;
		break;
	}
	this->init_DataGrid();
}

void Widget_ClosedArrange::init_DataGrid()
{
}

void  Widget_ClosedArrange::setHorizontalHeaderLabels(QStringList header)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(header);
}
