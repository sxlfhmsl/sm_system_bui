#include "widget_usercloseposition.h"
#include "ui_widget_usercloseposition.h"

//“用户平仓”界面
Widget_UserClosePosition::Widget_UserClosePosition(System_Type type, QWidget *parent)
	: Widget_Base(type, parent)
{
	ui = new Ui::Widget_UserClosePosition();
	ui->setupUi(this);
	// 初始化界面
	this->init_UI();
}

Widget_UserClosePosition::~Widget_UserClosePosition()
{
	delete ui;
}

void Widget_UserClosePosition::init_UI()
{
	switch (this->current_Type)
	{
	case System_Type::Admin:
		break;
	case System_Type::Agent:
		delete ui->label_Agent;
		ui->label_Agent = nullptr;
		delete ui->comboBox_Agent;
		ui->comboBox_Agent = nullptr;
		break;
	}
	this->init_DataGrid();
}

void Widget_UserClosePosition::init_DataGrid()
{
}

void  Widget_UserClosePosition::setHorizontalHeaderLabels(QStringList header)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(header);
}
