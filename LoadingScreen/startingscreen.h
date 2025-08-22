#ifndef STARTINGSCREEN_H
#define STARTINGSCREEN_H

#include <QMainWindow>
#include "mainwindow.h"

namespace Ui {
class StartingScreen;
}

class StartingScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit StartingScreen(QWidget *parent = nullptr);
    ~StartingScreen();

private slots:
    void on_pushButton_StartApplication_clicked();

private:
    Ui::StartingScreen *ui;
};

#endif // STARTINGSCREEN_H
