#include "admin_main.h"
#include "AdminCore\admin_datasummary.h"
#include "AdminCore\admin_clerk.h"

#include "AdminCore\Unique\admin_memberaccount.h"
#include "AdminCore\Unique\admin_agentaccount.h"
#include "AdminCore\Unique\admin_admin.h"
#include "AdminCore\Unique\admin_logmanage.h"

//股票后台 主要功能界面  -----管理端
Admin_Main::Admin_Main(QWidget *parent)
	: Widget_Main(Widget_Base::Admin, parent)
{
	this->setObjectName("Admin_Main");
	this->switch_TabWidget("数据汇总");
}

Admin_Main::~Admin_Main()
{
}

bool Admin_Main::switch_TabWidget(QString tab_name)
{
	if (Widget_Main::switch_TabWidget(tab_name))
	{
		QWidget* widget = nullptr;
		// 用户管理
		if (tab_name == "数据汇总")
			widget = new Admin_DataSummary();
		else if (tab_name == "会员账号")
			widget = new Admin_MemberAccount();
		else if (tab_name == "代理账号")
			widget = new Admin_AgentAccount();
		else if (tab_name == "管理员")
			widget = new Admin_Admin();
		else if (tab_name == "业务员")
			widget = new Admin_Clerk();
		else if (tab_name == "日志管理")
			widget = new Admin_LogManage();
		this->add_TabWidget(tab_name, widget);
		return true;
	}
	return false;
}
