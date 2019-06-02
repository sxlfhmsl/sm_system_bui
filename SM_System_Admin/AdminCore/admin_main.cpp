#include "admin_main.h"

//股票后台 主要功能界面
Admin_Main::Admin_Main(QWidget *parent)
	: Widget_Main(Widget_Base::Admin, parent)
{
	this->switch_TabWidget("数据汇总");
}

Admin_Main::~Admin_Main()
{
}

bool Admin_Main::switch_TabWidget(QString tab_name)
{
	if (Widget_Main::switch_TabWidget(tab_name))
	{
		return false;
	}
}
