#include "sender.h"
#include <iostream>

Sender::Sender(int initDataOne,int initDataTwo)
    : QObject(),dataOne(initDataOne),dataTwo(initDataTwo)
{

}


void Sender::triggerArithmeticOperations(ARITHMETIC_OPERATION_TYPE aoType)
{
    switch (aoType)
    {
    case ADD:
        std::cout << "IN ADD FUNCTION " << std::endl;
        emit add(this->dataOne,this->dataTwo);
        break;

    case SUBTRACT:
        std::cout << "IN SUBTRACT FUNCTION " << std::endl;
        emit subtract(this->dataOne,this->dataTwo);
        break;

    case MULTIPLY:
        std::cout << "IN MULTIPLY FUNCTION " << std::endl;
        emit multiply(this->dataOne,this->dataTwo);
        break;

    case DIVIDE:
        std::cout << "IN DIVIDE FUNCTION " << std::endl;
        emit divide(this->dataOne,this->dataTwo);
        break;

    default:
        break;
    }
}
