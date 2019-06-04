#include "agent_noticemanage.h"

// 代理端-----公告管理
Agent_NoticeManage::Agent_NoticeManage(QWidget *parent)
	: Widget_NoticeManage(System_Type::Agent, parent)
{
	// 创造表头
	this->create_GridHead();
}

Agent_NoticeManage::~Agent_NoticeManage()
{
}

void Agent_NoticeManage::create_GridHead()
{
	QStringList grid_head;
	grid_head << "管理员" << "标题" << "内容" << "创建时间" << "查看";
	this->setHorizontalHeaderLabels(grid_head);
}
