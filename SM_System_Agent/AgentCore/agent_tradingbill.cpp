#include "agent_tradingbill.h"

// 代理端-----交易账单
Agent_TradingBill::Agent_TradingBill(QWidget *parent)
	: Widget_TradingBill(System_Type::Agent, parent)
{
	// 创造表头
	this->create_GridHead();
}

Agent_TradingBill::~Agent_TradingBill()
{
}

void Agent_TradingBill::create_GridHead()
{
	QStringList grid_head;
	grid_head << "交易类型" << "单号" << "会员账号" << "股票代码" << "股票名称" << "交易价"
		<< "手数" << "交易金额" << "时间" << "操作人" << "备注";
	this->setHorizontalHeaderLabels(grid_head);
}
