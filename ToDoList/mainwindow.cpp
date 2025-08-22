#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QStandardPaths>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //load from text file (Create file object based on the provided location)
    QFile file(filePath);
    //QFile file("D:/Masterclass_in_C++_(Yogeshwar_Shukla)/TEMP/MY QT PRACTICE/ToDoList/toDo.txt");


    //Error check
    if(!file.open(QIODevice::ReadWrite))
    {
        QMessageBox::information(0,"error",file.errorString());
    }

    QTextStream in(&file);

    while(!in.atEnd())
    {
        //read line by line from text string
        QListWidgetItem* item = new QListWidgetItem(in.readLine(),ui->listWidget);
        ui->listWidget->addItem(item);
        item->setFlags(item->flags() | Qt::ItemIsEditable);
    }
    file.close();
}

MainWindow::~MainWindow()
{
    delete ui;

    QFile file(filePath);
    //QFile file("D:/Masterclass_in_C++_(Yogeshwar_Shukla)/TEMP/MY QT PRACTICE/ToDoList/toDo.txt");

    if(!file.open(QIODevice::ReadWrite))
    {
        QMessageBox::information(0,"error",file.errorString());
    }

    QTextStream out(&file);

    for(int i = 0; i < ui->listWidget->count(); ++i)
    {
        out<<ui->listWidget->item(i)->text()<<"\n";
    }
    file.close();
}

void MainWindow::on_btnAdd_clicked()
{
    QString taskText = ui->txtTask->text().trimmed(); // Trim to ignore whitespace-only input

    if (taskText.isEmpty()) {
        QMessageBox::warning(this, "Empty Task", "Cannot add an empty task.");
        return;
    }
    //add items to the listbox as listitem
    QListWidgetItem* item = new QListWidgetItem(ui->txtTask->text(),ui->listWidget);
    ui->listWidget->addItem(item);
    item->setFlags(item->flags() | Qt::ItemIsEditable); //edit item after added
    ui->txtTask->clear();
    ui->txtTask->setFocus();        //set focus on text box constantly
}


void MainWindow::on_btnRemove_clicked()
{
    QListWidgetItem* item =  ui->listWidget->takeItem(ui->listWidget->currentRow());
    //the one which is selected right now
    delete item;
}


void MainWindow::on_btnRemoveAll_clicked()
{
    ui->listWidget->clear();
}

