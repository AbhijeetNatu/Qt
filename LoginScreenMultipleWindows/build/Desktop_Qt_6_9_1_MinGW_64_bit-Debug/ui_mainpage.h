/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPage
{
public:
    QWidget *centralwidget;
    QLabel *lbl_title;

    void setupUi(QMainWindow *MainPage)
    {
        if (MainPage->objectName().isEmpty())
            MainPage->setObjectName("MainPage");
        MainPage->resize(634, 500);
        centralwidget = new QWidget(MainPage);
        centralwidget->setObjectName("centralwidget");
        lbl_title = new QLabel(centralwidget);
        lbl_title->setObjectName("lbl_title");
        lbl_title->setGeometry(QRect(0, 0, 640, 511));
        QFont font;
        font.setPointSize(27);
        font.setBold(true);
        lbl_title->setFont(font);
        lbl_title->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color:rgb(52,50,64);\n"
"	color:white\n"
"}"));
        lbl_title->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainPage->setCentralWidget(centralwidget);

        retranslateUi(MainPage);

        QMetaObject::connectSlotsByName(MainPage);
    } // setupUi

    void retranslateUi(QMainWindow *MainPage)
    {
        MainPage->setWindowTitle(QCoreApplication::translate("MainPage", "Home Page", nullptr));
        lbl_title->setText(QCoreApplication::translate("MainPage", "WELCOME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPage: public Ui_MainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
