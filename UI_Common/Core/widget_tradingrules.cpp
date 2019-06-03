#include "widget_tradingrules.h"
#include "ui_widget_tradingrules.h"

//“交易规则”页面
Widget_TradingRules::Widget_TradingRules(System_Type type, QWidget *parent)
	: Widget_Base(type, parent)
{
	ui = new Ui::Widget_TradingRules();
	ui->setupUi(this);
	// 初始化界面
	this->init_UI();
}

Widget_TradingRules::~Widget_TradingRules()
{
	delete ui;
}

void Widget_TradingRules::init_UI()
{
	switch (this->current_Type)
	{
	case System_Type::Admin:
		break;
	case System_Type::Agent:
		ui->lineEdit_Title->setEnabled(false);
		ui->textEdit_Content->setEnabled(false);
		delete ui->pushButton_Save;
		ui->pushButton_Save = nullptr;
		delete ui->horizontalSpacer_2;
		ui->horizontalSpacer_2 = nullptr;
		break;
	}
}
