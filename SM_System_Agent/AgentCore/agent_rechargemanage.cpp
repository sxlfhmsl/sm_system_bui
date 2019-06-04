#include "agent_rechargemanage.h"

// 代理端-----充值管理
Agent_RechargeManage::Agent_RechargeManage(QWidget *parent)
	: Widget_RechargeManage(System_Type::Agent, parent)
{
	// 创造表头
	this->create_GridHead();
}

Agent_RechargeManage::~Agent_RechargeManage()
{
}

void Agent_RechargeManage::create_GridHead()
{
	QStringList grid_head;
	grid_head << "会员账号" << "会员代码" << "会员名称" << "订单号" << "金额" << "下单IP地址"
		<< "订单时间" << "流水号" << "商家号" << "银行" << "存款IP地址" << "存款时间"
		<< "存款状态" << "备注";
	this->setHorizontalHeaderLabels(grid_head);
}
