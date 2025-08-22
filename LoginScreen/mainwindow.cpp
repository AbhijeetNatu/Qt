#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainpage.h"

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
        QMessageBox::information(this,"SUCCESS", "Login Success..");
        this->hide();
        MainPage *mainpage = new MainPage();
        mainpage->show();

    }
    else
    {
        QMessageBox::warning(this,"Warning","Please enter Valid Username or Password");
    }
}


void MainWindow::on_pushButton_Cancel_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Warning","Do you want to close the application?",QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        QApplication::quit();
    }
}

