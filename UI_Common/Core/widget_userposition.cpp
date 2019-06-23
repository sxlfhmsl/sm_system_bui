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

void Widget_UserPosition::init_DataGrid()
{
}

void  Widget_UserPosition::setHorizontalHeaderLabels(const QStringList &labels)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(labels);
}

void Widget_UserPosition::setItem(const int &row, const int &col, const QVariant &value)
{
	ui->widget_DataGrid->setItem(row, col, value);
}

void Widget_UserPosition::setIndexWidget(const int &row, const int &col, QWidget* widget)
{
	ui->widget_DataGrid->setIndexWidget(row, col, widget);
}

void Widget_UserPosition::set_PaginationInfo(int counts)
{
	ui->widget_DataGrid->set_PaginationInfo(counts);
}

void Widget_UserPosition::clear()
{
	ui->widget_DataGrid->clear();
}

QMap<QString, int> Widget_UserPosition::count()
{
	return ui->widget_DataGrid->count();
}
