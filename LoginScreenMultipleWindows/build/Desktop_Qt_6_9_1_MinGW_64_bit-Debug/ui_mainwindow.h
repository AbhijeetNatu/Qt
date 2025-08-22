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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_User_name;
    QLineEdit *lineEdit_Password;
    QPushButton *pushButton_Login;
    QPushButton *pushButton_Cancel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(634, 388);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 601, 311));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 30, 161, 61));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 130, 161, 61));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        lineEdit_User_name = new QLineEdit(groupBox);
        lineEdit_User_name->setObjectName("lineEdit_User_name");
        lineEdit_User_name->setGeometry(QRect(240, 40, 300, 41));
        QFont font1;
        font1.setBold(true);
        lineEdit_User_name->setFont(font1);
        lineEdit_Password = new QLineEdit(groupBox);
        lineEdit_Password->setObjectName("lineEdit_Password");
        lineEdit_Password->setGeometry(QRect(240, 140, 300, 41));
        lineEdit_Password->setFont(font1);
        lineEdit_Password->setEchoMode(QLineEdit::EchoMode::Password);
        pushButton_Login = new QPushButton(groupBox);
        pushButton_Login->setObjectName("pushButton_Login");
        pushButton_Login->setGeometry(QRect(100, 220, 181, 71));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        pushButton_Login->setFont(font2);
        pushButton_Cancel = new QPushButton(groupBox);
        pushButton_Cancel->setObjectName("pushButton_Cancel");
        pushButton_Cancel->setGeometry(QRect(340, 220, 181, 71));
        pushButton_Cancel->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 634, 29));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "LOGIN PAGE", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "User Name :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password :", nullptr));
        pushButton_Login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_Cancel->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
