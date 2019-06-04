#include "agent_closedarrange.h"

// 代理端-----休市安排
Agent_ClosedArrange::Agent_ClosedArrange(QWidget *parent)
	: Widget_ClosedArrange(System_Type::Agent, parent)
{
	// 创造表头
	this->create_GridHead();
}

Agent_ClosedArrange::~Agent_ClosedArrange()
{
}

void Agent_ClosedArrange::create_GridHead()
{
	QStringList grid_head;
	grid_head << "管理员" << "休市日期" << "创建时间" << "备注";
	this->setHorizontalHeaderLabels(grid_head);
}
