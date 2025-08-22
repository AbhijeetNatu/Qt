/********************************************************************************
** Form generated from reading UI file 'startingscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTINGSCREEN_H
#define UI_STARTINGSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartingScreen
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_StartApplication;

    void setupUi(QMainWindow *StartingScreen)
    {
        if (StartingScreen->objectName().isEmpty())
            StartingScreen->setObjectName("StartingScreen");
        StartingScreen->resize(500, 300);
        centralwidget = new QWidget(StartingScreen);
        centralwidget->setObjectName("centralwidget");
        pushButton_StartApplication = new QPushButton(centralwidget);
        pushButton_StartApplication->setObjectName("pushButton_StartApplication");
        pushButton_StartApplication->setGeometry(QRect(150, 90, 191, 71));
        QFont font;
        font.setBold(true);
        pushButton_StartApplication->setFont(font);
        StartingScreen->setCentralWidget(centralwidget);

        retranslateUi(StartingScreen);

        QMetaObject::connectSlotsByName(StartingScreen);
    } // setupUi

    void retranslateUi(QMainWindow *StartingScreen)
    {
        StartingScreen->setWindowTitle(QCoreApplication::translate("StartingScreen", "MainWindow", nullptr));
        pushButton_StartApplication->setText(QCoreApplication::translate("StartingScreen", "START APPLICATION", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartingScreen: public Ui_StartingScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTINGSCREEN_H
