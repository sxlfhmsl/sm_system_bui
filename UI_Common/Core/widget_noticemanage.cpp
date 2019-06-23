#include "widget_noticemanage.h"
#include "ui_widget_noticemanage.h"

// “公告管理”页面
Widget_NoticeManage::Widget_NoticeManage(System_Type type, QWidget *parent)
	: Widget_Base(type, parent)
{
	ui = new Ui::Widget_NoticeManage();
	ui->setupUi(this);
	// 初始化界面
	this->init_UI();
}

Widget_NoticeManage::~Widget_NoticeManage()
{
	delete ui;
}

void Widget_NoticeManage::init_UI()
{
	switch (this->current_Type)
	{
	case System_Type::Admin:
		break;
	case System_Type::Agent:
		ui->frame_Bar->layout()->removeWidget(ui->pushButton_AddNotice);
		delete ui->pushButton_AddNotice;
		ui->pushButton_AddNotice = nullptr;
		ui->frame_Bar->layout()->removeItem(ui->horizontalSpacer);
		delete ui->horizontalSpacer;
		ui->horizontalSpacer = nullptr;
		break;
	}
	this->init_DataGrid();
}

void Widget_NoticeManage::init_DataGrid()
{
}

void  Widget_NoticeManage::setHorizontalHeaderLabels(const QStringList &labels)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(labels);
}

void Widget_NoticeManage::setItem(const int &row, const int &col, const QVariant &value)
{
	ui->widget_DataGrid->setItem(row, col, value);
}

void Widget_NoticeManage::setIndexWidget(const int &row, const int &col, QWidget* widget)
{
	ui->widget_DataGrid->setIndexWidget(row, col, widget);
}

void Widget_NoticeManage::set_PaginationInfo(int counts)
{
	ui->widget_DataGrid->set_PaginationInfo(counts);
}

void Widget_NoticeManage::clear()
{
	ui->widget_DataGrid->clear();
}

QMap<QString, int> Widget_NoticeManage::count()
{
	return ui->widget_DataGrid->count();
}
