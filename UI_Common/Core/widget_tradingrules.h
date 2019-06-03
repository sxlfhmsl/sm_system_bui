#pragma once

#include "ui_common_global.h"

#include "component\widget_base.h"

namespace Ui { class Widget_TradingRules; };

/**
* @brief The Widget_TradingRules class
* @details “交易规则”页面
*/
class UI_COMMON_EXPORT Widget_TradingRules : public Widget_Base
{
	Q_OBJECT

public:
	Widget_TradingRules(System_Type type, QWidget *parent = Q_NULLPTR);
	~Widget_TradingRules();

private:
	Ui::Widget_TradingRules *ui;

private:
	/**
	* @brief init_UI
	* @author 盛录
	* @details 初始化当前窗口
	*/
	void init_UI();
};
