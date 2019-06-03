#include "widget_userposition.h"
#include "ui_widget_userposition.h"

// “用户持仓”页面
Widget_UserPosition::Widget_UserPosition(System_Type type, QWidget *parent)
	: Widget_Base(type, parent)
{
	ui = new Ui::Widget_UserPosition();
	ui->setupUi(this);
	// 初始化界面
	this->init_UI();
}

Widget_UserPosition::~Widget_UserPosition()
{
	delete ui;
}

void Widget_UserPosition::init_UI()
{
	switch (this->current_Type)
	{
	case Widget_Base::Admin:
		break;
	case Widget_Base::Agent:
		delete ui->label_Agent;
		ui->label_Agent = nullptr;
		delete ui->comboBox_Agent;
		ui->comboBox_Agent = nullptr;
		break;
	}
	this->init_DataGrid();
}

void Widget_UserPosition::init_DataGrid()
{
}

void  Widget_UserPosition::setHorizontalHeaderLabels(QStringList header)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(header);
}