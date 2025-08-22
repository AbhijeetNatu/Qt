/********************************************************************************
** Form generated from reading UI file 'gravitycalculatordialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAVITYCALCULATORDIALOG_H
#define UI_GRAVITYCALCULATORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GravityCalculatorDialog
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GravityCalculatorDialog)
    {
        if (GravityCalculatorDialog->objectName().isEmpty())
            GravityCalculatorDialog->setObjectName("GravityCalculatorDialog");
        GravityCalculatorDialog->resize(800, 600);
        centralwidget = new QWidget(GravityCalculatorDialog);
        centralwidget->setObjectName("centralwidget");
        GravityCalculatorDialog->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GravityCalculatorDialog);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 30));
        GravityCalculatorDialog->setMenuBar(menubar);
        statusbar = new QStatusBar(GravityCalculatorDialog);
        statusbar->setObjectName("statusbar");
        GravityCalculatorDialog->setStatusBar(statusbar);

        retranslateUi(GravityCalculatorDialog);

        QMetaObject::connectSlotsByName(GravityCalculatorDialog);
    } // setupUi

    void retranslateUi(QMainWindow *GravityCalculatorDialog)
    {
        GravityCalculatorDialog->setWindowTitle(QCoreApplication::translate("GravityCalculatorDialog", "GravityCalculatorDialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GravityCalculatorDialog: public Ui_GravityCalculatorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAVITYCALCULATORDIALOG_H
