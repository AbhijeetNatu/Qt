#include "gravitycalculatordialog.h"

GravityCalculatorDialog::GravityCalculatorDialog(QWidget *parent)
    : QDialog(parent)
{
    pLabel_1 = new QLabel(tr("Enter mass of Object 1 : "));
    pLabel_2 = new QLabel(tr("Enter mass of Object 2 : "));
    pLabel_3 = new QLabel(tr("Enter distance between the 2 objects : "));
    pLabel_4 = new QLabel(tr(""));

    pLineEdit_1 = new QLineEdit();
    pLineEdit_2 = new QLineEdit();
    pLineEdit_3 = new QLineEdit();

    pLabel_1->setBuddy(pLineEdit_1);
    pLabel_2->setBuddy(pLineEdit_2);
    pLabel_3->setBuddy(pLineEdit_3);

    pComputeButton = new QPushButton(tr("Compute ! "));
    pCloseButton = new QPushButton(tr("Close"));
    pClearButton = new QPushButton(tr("Clear"));


    connect(pCloseButton,SIGNAL(clicked()),this,SLOT(close()));

    connect(pClearButton,SIGNAL(clicked()),this,SLOT(clear()));

    connect(pComputeButton,SIGNAL(clicked()),this,SLOT(doCompute()));

    connect(pLineEdit_1,SIGNAL(textChanged(QString)),this,SLOT(readTextBox_1(QString)));

    connect(pLineEdit_2,SIGNAL(textChanged(QString)),this,SLOT(readTextBox_2(QString)));

    connect(pLineEdit_3,SIGNAL(textChanged(QString)),this,SLOT(readTextBox_3(QString)));


    entry_1 = new QHBoxLayout;
    entry_1->addWidget(pLabel_1);
    entry_1->addWidget(pLineEdit_1);

    entry_2 = new QHBoxLayout;
    entry_2->addWidget(pLabel_2);
    entry_2->addWidget(pLineEdit_2);

    entry_3 = new QHBoxLayout;
    entry_3->addWidget(pLabel_3);
    entry_3->addWidget(pLineEdit_3);

    leftlayout = new QVBoxLayout;
    leftlayout->addLayout(entry_1);
    leftlayout->addLayout(entry_2);
    leftlayout->addLayout(entry_3);
    leftlayout->addWidget(pLabel_4);

    rightlayout = new QVBoxLayout;
    rightlayout->addWidget(pComputeButton);
    rightlayout->addWidget(pClearButton);
    rightlayout->addWidget(pCloseButton);
    rightlayout->addStretch();

    mainLayout = new QHBoxLayout;
    mainLayout->addLayout(leftlayout);
    mainLayout->addLayout(rightlayout);

    setLayout(mainLayout);
    setWindowTitle("Gravitational Force Calculator");
    setFixedHeight(sizeHint().height());
}

void GravityCalculatorDialog::readTextBox_1(const QString& str)
{
    m1 = str.toDouble();
}

void GravityCalculatorDialog::readTextBox_2(const QString& str)
{
     m2 = str.toDouble();
}

void GravityCalculatorDialog::readTextBox_3(const QString& str)
{
     r = str.toDouble();
}

void GravityCalculatorDialog::doCompute()
{
    double G= 6.67e-11;
    double gravitationalForce = G*m1*m2/(r*r);
    QString strGravitationalForce;
    strGravitationalForce.setNum(gravitationalForce,'f',12);
    pLabel_4->setText(QString("Gravitational force is : ") + strGravitationalForce);
}

void GravityCalculatorDialog::clear()
{
    pLineEdit_1->clear();
    pLineEdit_2->clear();
    pLineEdit_3->clear();
    pLabel_4->clear();
}
