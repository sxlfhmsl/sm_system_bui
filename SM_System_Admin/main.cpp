#include "AdminCore\admin_mw.h"
#include <QtWidgets/QApplication>
#include "AdminCore\Unique\admin_singleton.h"

int main(int argc, char *argv[])
{
	Admin_Http::instance();
	Admin_Http::instance();
	QApplication a(argc, argv);
	Admin_MW w;
	w.show();
	return a.exec();
}
