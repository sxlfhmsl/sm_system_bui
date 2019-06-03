#include "admin_fundsdetails.h"

// 管理端-----资金明细
Admin_FundsDetails::Admin_FundsDetails(QWidget *parent)
	: Widget_FundsDetails(Widget_Base::Admin, parent)
{
	// 创造表头
	this->create_GridHead();
}

Admin_FundsDetails::~Admin_FundsDetails()
{
}

void Admin_FundsDetails::create_GridHead()
{
	QStringList grid_head;
	grid_head << "单号" << "会员账号" << "账单类型" << "发生金额" << "交易单号" << "创建人类型"
	<< "创建人" << "创建时间" << "备注";
	this->setHorizontalHeaderLabels(grid_head);
}
