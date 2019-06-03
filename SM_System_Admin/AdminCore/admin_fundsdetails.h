#pragma once

#include "Core\widget_fundsdetails.h"

// 管理端-----资金明细
class Admin_FundsDetails : public Widget_FundsDetails
{
	Q_OBJECT

public:
	Admin_FundsDetails(QWidget *parent = Q_NULLPTR);
	~Admin_FundsDetails();

private:
	// 创建表格头
	void create_GridHead();
};
