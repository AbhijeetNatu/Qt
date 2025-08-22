#include "mainwindow.h"
#include "./ui_mainwindow.h"

//Global variables
float number1,number2,result = 0;


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

void MainWindow::on_num1_textChanged(const QString &arg1)
{
    number1=arg1.toFloat();
}


void MainWindow::on_num2_textChanged(const QString &arg1)
{
    number2=arg1.toFloat();
}


void MainWindow::on_addButton_clicked()
{
    //add
    result = number1+number2;
    ui->result->setText(QString::number(result));
}


void MainWindow::on_subButton_clicked()
{
    //sub
    result = number1-number2;
    ui->result->setText(QString::number(result));
}


void MainWindow::on_mulButton_clicked()
{
    //mul
    result = number1*number2;
    ui->result->setText(QString::number(result));
}


void MainWindow::on_divButton_clicked()
{
    //divide
    result = number1/number2;
    ui->result->setText(QString::number(result));
}


void MainWindow::on_clearButton_clicked()
{
   // result = 0;
    //number1 = 0;
   // number2 = 0;
   // ui->result->setText(QString::number(result));
   //  ui->num1->setText(QString::number(number1));
   //  ui->num2->setText(QString::number(number2));
    ui->result->clear();
    ui->num1->clear();
    ui->num2->clear();
}

