#include <QApplication>
#include <QMainWindow>

int main(int argc, char* argv[])
{
    QApplication app(argc,argv);
    QMainWindow myWindow;

    myWindow.setWindowTitle("AAN : My First QT Window");
    myWindow.show();

    return app.exec();
}
