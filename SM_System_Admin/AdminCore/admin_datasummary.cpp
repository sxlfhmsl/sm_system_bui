#include "admin_datasummary.h"

Admin_DataSummary::Admin_DataSummary(QWidget *parent)
	: Widget_Data_Summary(Widget_Base::Admin, parent)
{
	this->setObjectName("Admin_DataSummary");
	this->faker_BaseInfo();
	this->faker_Summary();
	this->faker_TodayData();
}

Admin_DataSummary::~Admin_DataSummary()
{
}

void Admin_DataSummary::faker_BaseInfo()
{
	QStringList values;
	values << "关市" << "09:35" << "11:30" << "13:05" << "14:58"
		<< "1049342" << "4" << "4" << "2" << "0"
		<< "86" << "8" << "5" << "0" << "0";
	this->render_BaseInfo(":/template/template/baseinfotemplate.html", values);
}

void Admin_DataSummary::faker_TodayData()
{
	QStringList values;
	values << "0" << "0" << "0" << "0"
		<< "3" << "31200" << "0" << "0.0000"
		<< "4" << "10103" << "0"
		<< "0" << "0.0000" << "0" << "0.0000" << "0";
	this->render_TodayData(":/template/template/todaydatatemplate.html", values);
}

void Admin_DataSummary::faker_Summary()
{
	QStringList values;
	values << "3" << "45503" << "3" << "309397" << "0" << "0"
		<< "2" << "30200" << "0" << "0.0000"
		<< "1" << "10000" << "6024" << "1087" << "3877"
		<< "1049342" << "750" << "309"
		<< "0" << "0.0000" << "0" << "0.0000" << "0";
	this->render_Summary(":/template/template/summarytemplate.html", values);
}
