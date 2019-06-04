#include "agent_fundsdetails.h"

// 代理端-----资金明细
Agent_FundsDetails::Agent_FundsDetails(QWidget *parent)
	: Widget_FundsDetails(System_Type::Agent, parent)
{
	// 创造表头
	this->create_GridHead();
}

Agent_FundsDetails::~Agent_FundsDetails()
{
}

void Agent_FundsDetails::create_GridHead()
{
	QStringList grid_head;
	grid_head << "单号" << "会员账号" << "账单类型" << "发生金额" << "交易单号" << "创建人类型"
		<< "创建人" << "创建时间" << "备注";
	this->setHorizontalHeaderLabels(grid_head);
}
