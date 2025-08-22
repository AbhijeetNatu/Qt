#include "startingscreen.h"
#include "ui_startingscreen.h"

StartingScreen::StartingScreen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StartingScreen)
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint);
}

StartingScreen::~StartingScreen()
{
    delete ui;
}

void StartingScreen::on_pushButton_StartApplication_clicked()
{
    MainWindow *LoadingScreen = new MainWindow();
    LoadingScreen->show();
    qApp->processEvents(QEventLoop::AllEvents);
    LoadingScreen->Start_Loading();
}

