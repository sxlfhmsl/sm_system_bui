#include "admin_noticemanage.h"

// 管理端-----公告管理
Admin_NoticeManage::Admin_NoticeManage(QWidget *parent)
	: Widget_NoticeManage(Widget_Base::Admin, parent)
{
	// 创造表头
	this->create_GridHead();
}

Admin_NoticeManage::~Admin_NoticeManage()
{
}

void Admin_NoticeManage::create_GridHead()
{
	QStringList grid_head;
	grid_head << "编号" << "管理员" << "标题" << "内容" << "会员显示" << "代理显示"
	<< "创建时间" << "查看" << "修改" << "删除";
	this->setHorizontalHeaderLabels(grid_head);
}
