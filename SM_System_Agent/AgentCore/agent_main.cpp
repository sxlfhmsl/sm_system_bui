#include "agent_main.h"

Agent_Main::Agent_Main(QWidget *parent)
	: Widget_Main(Widget_Base::Agent, parent)
{
	this->switch_TabWidget("数据汇总");
}

Agent_Main::~Agent_Main()
{
}

bool Agent_Main::switch_TabWidget(QString tab_name)
{
	if (Widget_Main::switch_TabWidget(tab_name))
	{
		return false;
	}
}
