#include "admin_closedarrange.h"

// 管理端-----休市安排
Admin_ClosedArrange::Admin_ClosedArrange(QWidget *parent)
	: Widget_ClosedArrange(System_Type::Admin, parent)
{
	// 创造表头
	this->create_GridHead();
}

Admin_ClosedArrange::~Admin_ClosedArrange()
{
}

void Admin_ClosedArrange::create_GridHead()
{
	QStringList grid_head;
	grid_head << "管理员" << "休市日期" << "创建时间" << "备注" << "删除";
	this->setHorizontalHeaderLabels(grid_head);
}
