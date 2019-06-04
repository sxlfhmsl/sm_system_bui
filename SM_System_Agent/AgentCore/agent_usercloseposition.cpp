#include "agent_usercloseposition.h"

Agent_UserClosePosition::Agent_UserClosePosition(QWidget *parent)
	: Widget_UserClosePosition(System_Type::Agent, parent)
{
	// 创造表头
	this->create_GridHead();
}

Agent_UserClosePosition::~Agent_UserClosePosition()
{
}

void Agent_UserClosePosition::create_GridHead()
{
	QStringList grid_head;
	grid_head << "代理商" << "会员" << "代码/名称" << "单号（买）" << "下单时间（买）" << "成交价（买）"
		<< "单号（卖）" << "下单时间（卖）" << "成交价（卖）" << "多/空" << "数量（手）" << "买入手续费"
		<< "卖出手续费" << "加收手续费" << "留仓费" << "手续费" << "融资利息" << "印花税" << "盈亏";
	this->setHorizontalHeaderLabels(grid_head);
}
