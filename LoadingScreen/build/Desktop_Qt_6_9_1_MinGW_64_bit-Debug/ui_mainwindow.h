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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_Background;
    QProgressBar *progressBar;
    QLabel *label_value;
    QLabel *label_title;
    QPushButton *exitButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 400);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox_Background = new QGroupBox(centralwidget);
        groupBox_Background->setObjectName("groupBox_Background");
        groupBox_Background->setGeometry(QRect(-11, -11, 831, 421));
        progressBar = new QProgressBar(groupBox_Background);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(20, 310, 781, 80));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy);
        progressBar->setAutoFillBackground(true);
        progressBar->setValue(0);
        progressBar->setTextVisible(false);
        label_value = new QLabel(groupBox_Background);
        label_value->setObjectName("label_value");
        label_value->setGeometry(QRect(360, 250, 80, 50));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label_value->setFont(font);
        label_value->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_title = new QLabel(groupBox_Background);
        label_title->setObjectName("label_title");
        label_title->setGeometry(QRect(10, 40, 781, 61));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        label_title->setFont(font1);
        label_title->setAlignment(Qt::AlignmentFlag::AlignCenter);
        exitButton = new QPushButton(groupBox_Background);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(690, 20, 107, 33));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_Background->setTitle(QString());
        label_value->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_title->setText(QCoreApplication::translate("MainWindow", "PROGRESS BAR", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
