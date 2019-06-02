#include "agent_datasummary.h"

Agent_DataSummary::Agent_DataSummary(QWidget *parent)
	: Widget_Data_Summary(Widget_Base::Agent, parent)
{
	this->setObjectName("Agent_DataSummary");
	this->faker_BaseInfo();
	this->faker_Summary();
	this->faker_TodayData();
}

Agent_DataSummary::~Agent_DataSummary()
{
}

void Agent_DataSummary::faker_BaseInfo()
{
	QStringList values;
	values << "关市" << "09:35" << "11:30" << "13:05" << "14:58"
		<< "1050359" << "1" << "1" << "0" << "0"
		<< "0.000000";
	this->render_BaseInfo(":/template/template/baseinfotemplate.html", values);
}

void Agent_DataSummary::faker_TodayData()
{
	QStringList values;
	values << "0" << "0" << "0" << "0"
		<< "2" << "1200.0000" << "0" << "0.0000"
		<< "3" << "103.0000" << "0"
		<< "0" << "0.0000" << "0" << "0.0000" << "0";
	this->render_TodayData(":/template/template/todaydatatemplate.html", values);
}

void Agent_DataSummary::faker_Summary()
{
	QStringList values;
	values << "0" << "0.0000" << "0" << "0.0000" << "0"
		<< "2" << "32891" << "2" << "25214" << "0" << "0"
		<< "1" << "200.0000" << "0" << "0.0000"
		<< "0" << "0.0000" << "-1261"
		<< "12" << "68" << "25" << "-1367";
	this->render_Summary(":/template/template/summarytemplate.html", values);
}
