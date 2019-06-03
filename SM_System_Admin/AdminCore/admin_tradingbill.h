#pragma once

#include "Core\widget_tradingbill.h"

// 管理端-----交易账单
class Admin_TradingBill : public Widget_TradingBill
{
	Q_OBJECT

public:
	Admin_TradingBill(QWidget *parent = Q_NULLPTR);
	~Admin_TradingBill();

private:
	// 创建表格头
	void create_GridHead();
};
