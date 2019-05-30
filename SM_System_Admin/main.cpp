#include "AdminCore\admin_mw.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Admin_MW w;
	w.show();
	return a.exec();
}
