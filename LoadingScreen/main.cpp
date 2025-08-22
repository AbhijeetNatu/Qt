#include "mainwindow.h"
#include "startingscreen.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StartingScreen w;
    w.show();
    return a.exec();
}
