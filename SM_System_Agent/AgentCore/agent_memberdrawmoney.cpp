#include "agent_memberdrawmoney.h"

// 代理端-----会员提款
Agent_MemberDrawMoney::Agent_MemberDrawMoney(QWidget *parent)
	: Widget_MemberDrawMoney(System_Type::Agent, parent)
{
	// 创造表头
	this->create_GridHead();
}

Agent_MemberDrawMoney::~Agent_MemberDrawMoney()
{
}

void Agent_MemberDrawMoney::create_GridHead()
{
	QStringList grid_head;
	grid_head << "会员编码" << "提款日期" << "提款金额" << "银行" << "开户行" << "银行账户"
		<< "银行账号" << "代理审核状态" << "提款状态" << "处理时间" << "备注";
	this->setHorizontalHeaderLabels(grid_head);
}
