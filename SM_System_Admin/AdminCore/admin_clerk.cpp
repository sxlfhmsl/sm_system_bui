#include "admin_clerk.h"

// 管理端-----业务员
Admin_Clerk::Admin_Clerk(QWidget *parent)
	: Widget_Clerk(Widget_Base::Admin, parent)
{
	QStringList head;
	head << "代理" << "名称" << "修改" << "删除";
	this->setHorizontalHeaderLabels(head);
}

Admin_Clerk::~Admin_Clerk()
{
}
