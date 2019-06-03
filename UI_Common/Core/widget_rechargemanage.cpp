#include "widget_rechargemanage.h"
#include "ui_widget_rechargemanage.h"

// “充值管理”页面
Widget_RechargeManage::Widget_RechargeManage(System_Type type, QWidget *parent)
	: Widget_Base(type, parent)
{
	ui = new Ui::Widget_RechargeManage();
	ui->setupUi(this);
	// 初始化界面
	this->init_UI();
}

Widget_RechargeManage::~Widget_RechargeManage()
{
	delete ui;
}

void Widget_RechargeManage::init_UI()
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

void Widget_RechargeManage::init_DataGrid()
{
}

void  Widget_RechargeManage::setHorizontalHeaderLabels(QStringList header)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(header);
}
