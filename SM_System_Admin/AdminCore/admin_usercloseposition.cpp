#include "admin_usercloseposition.h"

Admin_UserClosePosition::Admin_UserClosePosition(QWidget *parent)
	: Widget_UserClosePosition(System_Type::Admin, parent)
{
	// 创造表头
	this->create_GridHead();
}

Admin_UserClosePosition::~Admin_UserClosePosition()
{
}

void Admin_UserClosePosition::create_GridHead()
{
	QStringList grid_head;
	grid_head << "代理商" << "会员" << "代码/名称" << "单号（买）" << "下单时间（买）" << "成交价（买）"
	<< "单号（卖）" << "下单时间（卖）" << "成交价（卖）" << "多/空" << "数量（手）" << "手续费"
	<< "融资利息" << "印花税" << "盈亏" << "修改" << "删除";
	this->setHorizontalHeaderLabels(grid_head);
}
