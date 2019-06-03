#include "admin_rechargemanage.h"

// 管理端-----充值管理
Admin_RechargeManage::Admin_RechargeManage(QWidget *parent)
	: Widget_RechargeManage(System_Type::Admin, parent)
{
	// 创造表头
	this->create_GridHead();
}

Admin_RechargeManage::~Admin_RechargeManage()
{
}

void Admin_RechargeManage::create_GridHead()
{
	QStringList grid_head;
	grid_head << "会员账号" << "会员代码" << "会员名称" << "订单号" << "金额" << "下单IP地址"
	<< "订单时间" << "流水号" << "商家号" << "银行" << "存款IP地址" << "存款时间"
	<< "存款状态" << "备注";
	this->setHorizontalHeaderLabels(grid_head);
}
