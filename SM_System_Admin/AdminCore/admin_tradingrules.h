#pragma once

#include "Core\widget_tradingrules.h"

// 管理端-----交易规则
class Admin_TradingRules : public Widget_TradingRules
{
	Q_OBJECT

public:
	Admin_TradingRules(QWidget *parent = Q_NULLPTR);
	~Admin_TradingRules();
};
