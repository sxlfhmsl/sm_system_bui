#include "AgentCore\agent_mw.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Agent_MW w;
	w.show();
	return a.exec();
}
