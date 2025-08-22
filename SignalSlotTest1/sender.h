#ifndef SENDER_H
#define SENDER_H

#include <QObject>

class Sender : public QObject
{
    Q_OBJECT

private:
    int dataOne, dataTwo;

public:
    typedef enum arithmeticOperationType{
        ADD = 1,
        SUBTRACT,
        MULTIPLY,
        DIVIDE
    }ARITHMETIC_OPERATION_TYPE;
    Sender(int initDataOne,int initDataTwo);
    void triggerArithmeticOperations(ARITHMETIC_OPERATION_TYPE aoType);

signals:
    void add(int,int);
    void subtract(int,int);
    void multiply(int,int);
    void divide(int,int);
};

#endif // SENDER_H
