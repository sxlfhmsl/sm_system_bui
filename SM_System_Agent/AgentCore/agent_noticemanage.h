#pragma once

#include "Core\widget_noticemanage.h"

// 代理端-----公告管理
class Agent_NoticeManage : public Widget_NoticeManage
{
	Q_OBJECT

public:
	Agent_NoticeManage(QWidget *parent = Q_NULLPTR);
	~Agent_NoticeManage();

private:
	// 创建表格头
	void create_GridHead();
};
