#include "admin_userposition.h"

// 管理端-----用户持仓
Admin_UserPosition::Admin_UserPosition(QWidget *parent)
	: Widget_UserPosition(Widget_Base::Admin, parent)
{
	this->create_GridHead();
}

Admin_UserPosition::~Admin_UserPosition()
{
}

void Admin_UserPosition::create_GridHead()
{
	QStringList grid_head;
	grid_head << "单号" << "会员" << "代理" << "时间" << "代码/名称" << "买价格"
		<< "现价" << "多/空" << "数量（手）" << "浮盈" << "盈亏比率" << "金额"
		<< "留仓费" << "手续费" << "修改" << "平仓" << "买价平仓" << "删除";
	this->setHorizontalHeaderLabels(grid_head);
}
