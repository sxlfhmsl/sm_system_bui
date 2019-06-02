#pragma once

#include "Core\widget_data_summary.h"

//管理端-----数据汇总
class Admin_DataSummary : public Widget_Data_Summary
{
	Q_OBJECT

public:
	Admin_DataSummary(QWidget *parent = Q_NULLPTR);
	~Admin_DataSummary();

private:
	/**
	:/template/template/baseinfotemplate.html
	* @brief faker_BaseInfo
	* @details 生成假的基础信息
	*/
	void faker_BaseInfo();

	/**
	:/template/template/todaydatatemplate.html
	* @brief faker_TodayData
	* @details 生成假的今日信息
	*/
	void faker_TodayData();

	/**
	:/template/template/summarytemplate.html
	* @brief faker_Summary
	* @details 生成假的汇总
	*/
	void faker_Summary();
};
