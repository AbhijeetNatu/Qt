#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Login_clicked()
{
    QString UserName = ui->lineEdit_User_name->text();
    QString Password = ui->lineEdit_Password->text();       //in Password field, echo = password.. in UI file

    if(UserName == "Abhijeet" && Password == "Abhijeet123")
    {
        QMessageBox::information(this,"Abhijeet", "Login Success..");
    }
    else
    {
        QMessageBox::warning(this,"Abhijeet","Please enter Valid Username or Password");
    }
}


void MainWindow::on_pushButton_Cancel_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Abhijeet","Do you want to close the application?",QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        QApplication::quit();
    }
}

