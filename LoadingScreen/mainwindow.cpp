#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint);
    setMaximumWidth(800);
    setMaximumHeight(400);

    ui->progressBar->setMinimum(1);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setRange(1,100);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Start_Loading()
{
    for(int value = ui->progressBar->minimum();value <= ui->progressBar->maximum();value++)
    {
        QThread::msleep(30);
        ui->progressBar->setValue(value);
        ui->label_value->setText(QString::number(value) + " %");
        qApp->processEvents(QEventLoop::AllEvents);
    }
}

void MainWindow::on_exitButton_clicked()
{
   QApplication::quit();
}

