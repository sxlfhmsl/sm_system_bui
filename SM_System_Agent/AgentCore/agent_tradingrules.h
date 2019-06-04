#pragma once

#include "Core\widget_tradingrules.h"

// 代理端-----交易规则
class Agent_TradingRules : public Widget_TradingRules
{
	Q_OBJECT

public:
	Agent_TradingRules(QWidget *parent = Q_NULLPTR);
	~Agent_TradingRules();
};
