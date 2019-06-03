#pragma once

#include "Core\widget_noticemanage.h"

// 管理端-----公告管理
class Admin_NoticeManage : public Widget_NoticeManage
{
	Q_OBJECT

public:
	Admin_NoticeManage(QWidget *parent = Q_NULLPTR);
	~Admin_NoticeManage();

private:
	// 创建表格头
	void create_GridHead();
};
