#include "agent_main.h"
#include "AgentCore\agent_datasummary.h"
#include "AgentCore\agent_clerk.h"
#include "AgentCore\agent_userposition.h"
#include "AgentCore\agent_usercloseposition.h"
#include "AgentCore\agent_tradingbill.h"
#include "AgentCore\agent_fundsdetails.h"
#include "AgentCore\agent_memberdrawmoney.h"

#include "AgentCore\Unique\agent_accountinfo.h"
#include "AgentCore\Unique\agent_memberinfo.h"
#include "AgentCore\Unique\agent_withdrawfunds.h"

//股票后台 主要功能界面-----代理端
Agent_Main::Agent_Main(QWidget *parent)
	: Widget_Main(Widget_Base::Agent, parent)
{
	this->setObjectName("Agent_Main");
	this->switch_TabWidget("数据汇总");
}

Agent_Main::~Agent_Main()
{
}

bool Agent_Main::switch_TabWidget(QString tab_name)
{
	if (Widget_Main::switch_TabWidget(tab_name))
	{
		QWidget* widget = nullptr;
		// 用户管理
		if (tab_name == "数据汇总")
			widget = new Agent_DataSummary();
		else if (tab_name == "账户信息")
			widget = new Agent_AccountInfo();
		else if (tab_name == "会员信息")
			widget = new Agent_MemberInfo();
		else if (tab_name == "业务员")
			widget = new Agent_Clerk();
		// 报表统计
		else if (tab_name == "用户持仓")
			widget = new Agent_UserPosition();
		else if (tab_name == "用户平仓")
			widget = new Agent_UserClosePosition();
		else if (tab_name == "交易账单")
			widget = new Agent_TradingBill();
		else if (tab_name == "资金明细")
			widget = new Agent_FundsDetails();
		else if (tab_name == "提款申请")
			widget = new Agent_WithdrawFunds();
		else if (tab_name == "会员提款")
			widget = new Agent_MemberDrawMoney();
		if (widget != nullptr)
		{
			this->add_TabWidget(tab_name, widget);
			return true;
		}
	}
	return false;
}
