#include "admin_systemsetting.h"
#include "ui_admin_systemsetting.h"


// “系统设置”页面
Admin_SystemSetting::Admin_SystemSetting(QWidget *parent)
	: Widget_Base(System_Type::Admin, parent)
{
	ui = new Ui::Admin_SystemSetting();
	ui->setupUi(this);
	// 初始化页面
	this->init_UI();
}

Admin_SystemSetting::~Admin_SystemSetting()
{
	delete ui;
}

void Admin_SystemSetting::init_UI()
{
}
