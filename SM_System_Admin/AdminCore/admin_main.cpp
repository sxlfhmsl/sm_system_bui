#include "admin_main.h"
#include "AdminCore\admin_datasummary.h"
#include "AdminCore\admin_clerk.h"
#include "AdminCore\admin_userposition.h"
#include "AdminCore\admin_usercloseposition.h"
#include "AdminCore\admin_tradingbill.h"
#include "AdminCore\admin_fundsdetails.h"
#include "AdminCore\admin_rechargemanage.h"
#include "AdminCore\admin_memberdrawmoney.h"
#include "AdminCore\admin_noticemanage.h"
#include "AdminCore\admin_closedarrange.h"

#include "AdminCore\Unique\admin_memberaccount.h"
#include "AdminCore\Unique\admin_agentaccount.h"
#include "AdminCore\Unique\admin_admin.h"
#include "AdminCore\Unique\admin_logmanage.h"
#include "AdminCore\Unique\admin_mantrading.h"
#include "AdminCore\Unique\admin_agentdrawmoney.h"
#include "AdminCore\Unique\admin_stockmanage.h"

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
		// 报表统计
		else if (tab_name == "用户持仓")
			widget = new Admin_UserPosition();
		else if (tab_name == "用户平仓")
			widget = new Admin_UserClosePosition();
		else if (tab_name == "交易账单")
			widget = new Admin_TradingBill();
		// 款项相关
		else if (tab_name == "手动入/扣款")
			widget = new Admin_ManTrading();
		else if (tab_name == "资金明细")
			widget = new Admin_FundsDetails();
		else if (tab_name == "充值管理")
			widget = new Admin_RechargeManage();
		else if (tab_name == "代理提款")
			widget = new Admint_AgentDrawMoney();
		else if (tab_name == "会员提款")
			widget = new Admin_MemberDrawMoney();
		// 其他功能
		else if (tab_name == "公告管理")
			widget = new Admin_NoticeManage();
		else if (tab_name == "休市安排")
			widget = new Admin_ClosedArrange();
		else if (tab_name == "股票管理")
			widget = new Admin_StockManage();
		this->add_TabWidget(tab_name, widget);
		return true;
	}
	return false;
}
