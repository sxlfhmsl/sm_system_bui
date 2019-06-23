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

void  Widget_MemberDrawMoney::setHorizontalHeaderLabels(const QStringList &labels)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(labels);
}

void Widget_MemberDrawMoney::setItem(const int &row, const int &col, const QVariant &value)
{
	ui->widget_DataGrid->setItem(row, col, value);
}

void Widget_MemberDrawMoney::setIndexWidget(const int &row, const int &col, QWidget* widget)
{
	ui->widget_DataGrid->setIndexWidget(row, col, widget);
}

void Widget_MemberDrawMoney::set_PaginationInfo(int counts)
{
	ui->widget_DataGrid->set_PaginationInfo(counts);
}

void Widget_MemberDrawMoney::clear()
{
	ui->widget_DataGrid->clear();
}

QMap<QString, int> Widget_MemberDrawMoney::count()
{
	return ui->widget_DataGrid->count();
}

