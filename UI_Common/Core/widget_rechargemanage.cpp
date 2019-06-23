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

void  Widget_RechargeManage::setHorizontalHeaderLabels(const QStringList &labels)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(labels);
}

void Widget_RechargeManage::setItem(const int &row, const int &col, const QVariant &value)
{
	ui->widget_DataGrid->setItem(row, col, value);
}

void Widget_RechargeManage::setIndexWidget(const int &row, const int &col, QWidget* widget)
{
	ui->widget_DataGrid->setIndexWidget(row, col, widget);
}

void Widget_RechargeManage::set_PaginationInfo(int counts)
{
	ui->widget_DataGrid->set_PaginationInfo(counts);
}

void Widget_RechargeManage::clear()
{
	ui->widget_DataGrid->clear();
}

QMap<QString, int> Widget_RechargeManage::count()
{
	return ui->widget_DataGrid->count();
}

