#include "mainwindow.h"
#include <QApplication>
#include <QCoreApplication>

int main(int argc, char *argv[]) {

	QCoreApplication::addLibraryPath(".");
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
