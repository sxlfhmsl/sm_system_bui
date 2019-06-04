#pragma once

#include "Core\widget_tradingbill.h"

// 代理端-----交易账单
class Agent_TradingBill : public Widget_TradingBill
{
	Q_OBJECT

public:
	Agent_TradingBill(QWidget *parent = Q_NULLPTR);
	~Agent_TradingBill();

private:
	// 创建表格头
	void create_GridHead();
};
