/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *addButton;
    QPushButton *subButton;
    QPushButton *mulButton;
    QPushButton *divButton;
    QLineEdit *num1;
    QLineEdit *num2;
    QLabel *result;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *clearButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(599, 490);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(420, 40, 107, 33));
        subButton = new QPushButton(centralwidget);
        subButton->setObjectName("subButton");
        subButton->setGeometry(QRect(420, 110, 107, 33));
        mulButton = new QPushButton(centralwidget);
        mulButton->setObjectName("mulButton");
        mulButton->setGeometry(QRect(420, 180, 107, 33));
        divButton = new QPushButton(centralwidget);
        divButton->setObjectName("divButton");
        divButton->setGeometry(QRect(420, 250, 107, 33));
        num1 = new QLineEdit(centralwidget);
        num1->setObjectName("num1");
        num1->setGeometry(QRect(180, 100, 113, 32));
        num2 = new QLineEdit(centralwidget);
        num2->setObjectName("num2");
        num2->setGeometry(QRect(180, 190, 113, 32));
        result = new QLabel(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(180, 280, 111, 31));
        result->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 100, 111, 24));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 190, 101, 24));
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 280, 72, 24));
        label_4->setFont(font);
        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(420, 330, 107, 33));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        subButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        mulButton->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        divButton->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        result->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "NUMBER 1", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "NUMBER 2", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "RESULT", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "CLEAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
