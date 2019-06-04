#include "agent_clerk.h"

// 代理端-----业务员
Agent_Clerk::Agent_Clerk(QWidget *parent)
	: Widget_Clerk(System_Type::Agent, parent)
{
	// 创造表头
	this->create_GridHead();
}

Agent_Clerk::~Agent_Clerk()
{
}

void Agent_Clerk::create_GridHead()
{
	QStringList head;
	head << "名称" << "修改" << "删除";
	this->setHorizontalHeaderLabels(head);
}
