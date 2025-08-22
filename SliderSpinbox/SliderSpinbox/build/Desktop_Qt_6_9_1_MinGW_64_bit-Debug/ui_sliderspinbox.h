/********************************************************************************
** Form generated from reading UI file 'sliderspinbox.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLIDERSPINBOX_H
#define UI_SLIDERSPINBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SliderSpinbox
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SliderSpinbox)
    {
        if (SliderSpinbox->objectName().isEmpty())
            SliderSpinbox->setObjectName("SliderSpinbox");
        SliderSpinbox->resize(800, 600);
        centralwidget = new QWidget(SliderSpinbox);
        centralwidget->setObjectName("centralwidget");
        SliderSpinbox->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SliderSpinbox);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 30));
        SliderSpinbox->setMenuBar(menubar);
        statusbar = new QStatusBar(SliderSpinbox);
        statusbar->setObjectName("statusbar");
        SliderSpinbox->setStatusBar(statusbar);

        retranslateUi(SliderSpinbox);

        QMetaObject::connectSlotsByName(SliderSpinbox);
    } // setupUi

    void retranslateUi(QMainWindow *SliderSpinbox)
    {
        SliderSpinbox->setWindowTitle(QCoreApplication::translate("SliderSpinbox", "SliderSpinbox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SliderSpinbox: public Ui_SliderSpinbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLIDERSPINBOX_H
