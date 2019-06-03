#include "widget_memberdrawmoney.h"
#include "ui_widget_memberdrawmoney.h"

// “会员提款”界面
Widget_MemberDrawMoney::Widget_MemberDrawMoney(System_Type type, QWidget *parent)
	: Widget_Base(type, parent)
{
	ui = new Ui::Widget_MemberDrawMoney();
	ui->setupUi(this);
	// 初始化界面
	this->init_UI();
}

Widget_MemberDrawMoney::~Widget_MemberDrawMoney()
{
	delete ui;
}

void Widget_MemberDrawMoney::init_UI()
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

void Widget_MemberDrawMoney::init_DataGrid()
{
}

void  Widget_MemberDrawMoney::setHorizontalHeaderLabels(QStringList header)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(header);
}
