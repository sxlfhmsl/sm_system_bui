#include "httptest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	HttpTest w;
	w.show();
	return a.exec();
}
