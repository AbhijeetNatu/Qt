#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>

class MyClass : public QObject
{
    Q_OBJECT

public:
    MyClass();
    void trigger(int num1,int num2);

signals:
    int f(int,int);
};

#endif // MYCLASS_H
