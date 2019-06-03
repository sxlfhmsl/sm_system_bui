#include "admin_clerk.h"

// 管理端-----业务员
Admin_Clerk::Admin_Clerk(QWidget *parent)
	: Widget_Clerk(Widget_Base::Admin, parent)
{
	this->create_GridHead();
}

Admin_Clerk::~Admin_Clerk()
{
}

void Admin_Clerk::create_GridHead()
{
	QStringList head;
	head << "代理" << "名称" << "修改" << "删除";
	this->setHorizontalHeaderLabels(head);
}
