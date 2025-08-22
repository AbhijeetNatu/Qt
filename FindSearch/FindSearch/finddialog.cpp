#include "finddialog.h"

FindDialog::FindDialog(QWidget *parent)
    : QDialog(parent)
{
    label = new QLabel(tr("Find &what:"));
    lineEdit = new QLineEdit;
    label->setBuddy(lineEdit);          // FOR NO RESIZE ISSUES between Line Edit and QLabel

    caseCheckBox = new QCheckBox(tr("Match &case"));
    backwardCheckBox = new QCheckBox(tr("Search &backward"));

    findNextButton = new QPushButton(tr("&Find Next"));
    findNextButton->setDefault(true);
    findNextButton->setEnabled(false);

    findPreviousButton = new QPushButton(tr("&Find Prev"));
    findPreviousButton->setEnabled(false);

    closeButton = new QPushButton(tr("Close"));

    connect(lineEdit,SIGNAL(textChanged(QString)),
            this,SLOT(enableFindButton(QString)));
    connect(findNextButton, SIGNAL(findNext()),
            this, SLOT(findNextButton));
    connect(findPreviousButton, SIGNAL(findPrevious()),
            this, SLOT(findPreviousButton));

    QHBoxLayout *topLeftLayout = new QHBoxLayout;
    topLeftLayout->addWidget(label);
    topLeftLayout->addWidget(lineEdit);

    QVBoxLayout *leftLayout = new QVBoxLayout;
    leftLayout->addLayout(topLeftLayout);
    leftLayout->addWidget(caseCheckBox);
    leftLayout->addWidget(backwardCheckBox);

    QVBoxLayout *rightLayout = new QVBoxLayout;
    rightLayout->addWidget(findNextButton);
    rightLayout->addWidget(findPreviousButton);
    rightLayout->addWidget(closeButton);
    rightLayout->addStretch();

    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addLayout(leftLayout);
    mainLayout->addLayout(rightLayout);
    setLayout(mainLayout);

    setWindowTitle(tr("Find"));
    setFixedHeight(sizeHint().height());

}

void FindDialog::enableFindButton(const QString &text)
{
    findNextButton->setEnabled(!text.isEmpty());
}

void FindDialog::findClicked()
{
    QString text = lineEdit->text();
    Qt::CaseSensitivity cs = caseCheckBox->isChecked() ? Qt::CaseSensitive
                                                       : Qt::CaseInsensitive;

    if(backwardCheckBox->isChecked())
    {
        emit findPrevious(text,cs);
    }
    else
    {
        emit findNext(text,cs);
    }

}

void findNext(const QString &str,Qt::CaseSensitivity cs)
{

}

void findPrevious(const QString &str,Qt::CaseSensitivity cs)
{

}

