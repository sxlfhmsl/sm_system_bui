#include "agent_userposition.h"

// 代理端-----用户持仓
Agent_UserPosition::Agent_UserPosition(QWidget *parent)
	: Widget_UserPosition(System_Type::Agent, parent)
{
	this->create_GridHead();
}

Agent_UserPosition::~Agent_UserPosition()
{
}

void Agent_UserPosition::create_GridHead()
{
	QStringList grid_head;
	grid_head << "单号" << "会员" << "代理" << "时间" << "代码/名称" << "买价格"
		<< "现价" << "多/空" << "数量（手）" << "金额" << "留仓费" << "手续费"
		<< "盈亏" << "平仓";
	this->setHorizontalHeaderLabels(grid_head);
}
