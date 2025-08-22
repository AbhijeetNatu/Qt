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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *pushButton_SeekBackward;
    QPushButton *pushButton_PlayPause;
    QPushButton *pushButton_Stop;
    QPushButton *pushButton_SeekForward;
    QPushButton *pushButton_Volume;
    QSlider *horizontalSlider_volume;
    QSlider *horizontalSlider_duration;
    QLabel *label_current_time;
    QLabel *label_total_time;
    QMenuBar *menubar;
    QMenu *menuSelect_Video_File;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(9, 10, 781, 411));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid black;\n"
"}\n"
""));
        pushButton_SeekBackward = new QPushButton(centralwidget);
        pushButton_SeekBackward->setObjectName("pushButton_SeekBackward");
        pushButton_SeekBackward->setGeometry(QRect(10, 460, 81, 71));
        pushButton_PlayPause = new QPushButton(centralwidget);
        pushButton_PlayPause->setObjectName("pushButton_PlayPause");
        pushButton_PlayPause->setGeometry(QRect(100, 460, 81, 71));
        pushButton_Stop = new QPushButton(centralwidget);
        pushButton_Stop->setObjectName("pushButton_Stop");
        pushButton_Stop->setGeometry(QRect(190, 460, 81, 71));
        pushButton_SeekForward = new QPushButton(centralwidget);
        pushButton_SeekForward->setObjectName("pushButton_SeekForward");
        pushButton_SeekForward->setGeometry(QRect(280, 460, 81, 71));
        pushButton_Volume = new QPushButton(centralwidget);
        pushButton_Volume->setObjectName("pushButton_Volume");
        pushButton_Volume->setGeometry(QRect(550, 460, 81, 71));
        horizontalSlider_volume = new QSlider(centralwidget);
        horizontalSlider_volume->setObjectName("horizontalSlider_volume");
        horizontalSlider_volume->setGeometry(QRect(640, 480, 131, 22));
        horizontalSlider_volume->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider_duration = new QSlider(centralwidget);
        horizontalSlider_duration->setObjectName("horizontalSlider_duration");
        horizontalSlider_duration->setGeometry(QRect(140, 430, 521, 22));
        horizontalSlider_duration->setOrientation(Qt::Orientation::Horizontal);
        label_current_time = new QLabel(centralwidget);
        label_current_time->setObjectName("label_current_time");
        label_current_time->setGeometry(QRect(41, 430, 81, 24));
        label_total_time = new QLabel(centralwidget);
        label_total_time->setObjectName("label_total_time");
        label_total_time->setGeometry(QRect(680, 430, 81, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 30));
        menuSelect_Video_File = new QMenu(menubar);
        menuSelect_Video_File->setObjectName("menuSelect_Video_File");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuSelect_Video_File->menuAction());
        menuSelect_Video_File->addAction(actionOpen);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Video Player", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        groupBox->setTitle(QString());
        pushButton_SeekBackward->setText(QString());
        pushButton_PlayPause->setText(QString());
        pushButton_Stop->setText(QString());
        pushButton_SeekForward->setText(QString());
        pushButton_Volume->setText(QString());
        label_current_time->setText(QCoreApplication::translate("MainWindow", "00:000:00", nullptr));
        label_total_time->setText(QCoreApplication::translate("MainWindow", "00:000:00", nullptr));
        menuSelect_Video_File->setTitle(QCoreApplication::translate("MainWindow", "Select Video File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
