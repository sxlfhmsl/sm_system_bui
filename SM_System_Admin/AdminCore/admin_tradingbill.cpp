#include "admin_tradingbill.h"

Admin_TradingBill::Admin_TradingBill(QWidget *parent)
	: Widget_TradingBill(System_Type::Admin, parent)
{
	// 创造表头
	this->create_GridHead();
}

Admin_TradingBill::~Admin_TradingBill()
{
}

void Admin_TradingBill::create_GridHead()
{
	QStringList grid_head;
	grid_head << "交易类型" << "单号" << "会员账号" << "股票代码" << "股票名称" << "交易价"
	<< "手数" << "交易金额" << "时间" << "操作人" << "备注";
	this->setHorizontalHeaderLabels(grid_head);
}
