#ifndef GRAVITYCALCULATORDIALOG_H
#define GRAVITYCALCULATORDIALOG_H

#include <QApplication>
#include <QMainWindow>
#include <QDialog>
#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

class GravityCalculatorDialog : public QDialog
{
    Q_OBJECT

public:
    GravityCalculatorDialog(QWidget *parent = nullptr);

public slots:
    void readTextBox_1(const QString& str);
    void readTextBox_2(const QString& str);
    void readTextBox_3(const QString& str);
    void doCompute();
    void clear();

private:
    QLabel *pLabel_1;
    QLabel *pLabel_2;
    QLabel *pLabel_3;
    QLabel *pLabel_4;

    QLineEdit *pLineEdit_1;
    QLineEdit *pLineEdit_2;
    QLineEdit *pLineEdit_3;

    QPushButton *pComputeButton;
    QPushButton *pCloseButton;
    QPushButton *pClearButton;

    QHBoxLayout *entry_1;
    QHBoxLayout *entry_2;
    QHBoxLayout *entry_3;

    QVBoxLayout *leftlayout;
    QVBoxLayout *rightlayout;

    QHBoxLayout *mainLayout;

    double m1;
    double m2;
    double r;

};
#endif // GRAVITYCALCULATORDIALOG_H
