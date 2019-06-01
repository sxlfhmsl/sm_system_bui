#include "agent_login.h"

Agent_Login::Agent_Login(QWidget *parent)
	: Widget_Login(Widget_Base::Agent, parent)
{
}

Agent_Login::~Agent_Login()
{
}

void Agent_Login::check_LoginInfo(QString u_name, QString u_pass)
{
	emit signal_LoginSuccess(u_name);
}