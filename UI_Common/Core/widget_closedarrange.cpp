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
		ui->frame_Bar->layout()->removeWidget(ui->pushButton_AddArrange);
		delete ui->pushButton_AddArrange;
		ui->pushButton_AddArrange = nullptr;
		ui->frame_Bar->layout()->removeItem(ui->horizontalSpacer);
		delete ui->horizontalSpacer;
		ui->horizontalSpacer = nullptr;
		break;
	}
	this->init_DataGrid();
}

void Widget_ClosedArrange::init_DataGrid()
{
}

void  Widget_ClosedArrange::setHorizontalHeaderLabels(const QStringList &labels)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(labels);
}

void Widget_ClosedArrange::setItem(const int &row, const int &col, const QVariant &value)
{
	ui->widget_DataGrid->setItem(row, col, value);
}

void Widget_ClosedArrange::setIndexWidget(const int &row, const int &col, QWidget* widget)
{
	ui->widget_DataGrid->setIndexWidget(row, col, widget);
}

void Widget_ClosedArrange::set_PaginationInfo(int counts)
{
	ui->widget_DataGrid->set_PaginationInfo(counts);
}

void Widget_ClosedArrange::clear()
{
	ui->widget_DataGrid->clear();
}

QMap<QString, int> Widget_ClosedArrange::count()
{
	return ui->widget_DataGrid->count();
}
