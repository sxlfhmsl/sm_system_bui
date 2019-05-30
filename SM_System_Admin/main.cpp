#include "sm_system_admin.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SM_System_Admin w;
	w.show();
	return a.exec();
}
