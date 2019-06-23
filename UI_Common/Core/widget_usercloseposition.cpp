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
		ui->frame_Bar->layout()->removeWidget(ui->label_Agent);
		delete ui->label_Agent;
		ui->label_Agent = nullptr;
		ui->frame_Bar->layout()->removeWidget(ui->comboBox_Agent);
		delete ui->comboBox_Agent;
		ui->comboBox_Agent = nullptr;
		break;
	}
	this->init_DataGrid();
}

void Widget_UserClosePosition::init_DataGrid()
{
}

void  Widget_UserClosePosition::setHorizontalHeaderLabels(const QStringList &labels)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(labels);
}

void Widget_UserClosePosition::setItem(const int &row, const int &col, const QVariant &value)
{
	ui->widget_DataGrid->setItem(row, col, value);
}

void Widget_UserClosePosition::setIndexWidget(const int &row, const int &col, QWidget* widget)
{
	ui->widget_DataGrid->setIndexWidget(row, col, widget);
}

void Widget_UserClosePosition::set_PaginationInfo(int counts)
{
	ui->widget_DataGrid->set_PaginationInfo(counts);
}

void Widget_UserClosePosition::clear()
{
	ui->widget_DataGrid->clear();
}

QMap<QString, int> Widget_UserClosePosition::count()
{
	return ui->widget_DataGrid->count();
}
