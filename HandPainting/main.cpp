#include "HandPainting.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	HandPainting w;
	w.show();
	return a.exec();
}
