#pragma once

#include "Core\widget_fundsdetails.h"

// 代理端-----资金明细
class Agent_FundsDetails : public Widget_FundsDetails
{
	Q_OBJECT

public:
	Agent_FundsDetails(QWidget *parent = Q_NULLPTR);
	~Agent_FundsDetails();

private:
	// 创建表格头
	void create_GridHead();
};
