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

void  Widget_NoticeManage::setHorizontalHeaderLabels(QStringList header)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(header);
}
