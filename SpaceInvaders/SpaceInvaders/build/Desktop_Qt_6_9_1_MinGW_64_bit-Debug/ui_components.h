/********************************************************************************
** Form generated from reading UI file 'components.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPONENTS_H
#define UI_COMPONENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_components
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *components)
    {
        if (components->objectName().isEmpty())
            components->setObjectName("components");
        components->resize(800, 600);
        centralwidget = new QWidget(components);
        centralwidget->setObjectName("centralwidget");
        components->setCentralWidget(centralwidget);
        menubar = new QMenuBar(components);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 30));
        components->setMenuBar(menubar);
        statusbar = new QStatusBar(components);
        statusbar->setObjectName("statusbar");
        components->setStatusBar(statusbar);

        retranslateUi(components);

        QMetaObject::connectSlotsByName(components);
    } // setupUi

    void retranslateUi(QMainWindow *components)
    {
        components->setWindowTitle(QCoreApplication::translate("components", "components", nullptr));
    } // retranslateUi

};

namespace Ui {
    class components: public Ui_components {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPONENTS_H
