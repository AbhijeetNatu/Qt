#include "receiver.h"
#include <iostream>

/*Receiver::Receiver(QObject *parent)
    : QObject{parent}
{}
*/

void Receiver::doAdd(int n1,int n2)
{
    std::cout << "Receiver::doAdd():Addition of " <<n1 << " and " << n2 << " is "
              << n1 + n2 << std::endl;
}


void Receiver::doSubtract(int n1,int n2)
{
    std::cout << "Receiver::doSubtract():Subtraction of " <<n1 << " and " << n2 << " is "
              << n1 - n2 << std::endl;
}


void Receiver::doMultiply(int n1,int n2)
{
    std::cout << "Receiver::doMultiply():Multiplication of " <<n1 << " and " << n2 << " is "
              << n1 * n2 << std::endl;
}


void Receiver::doDivide(int n1,int n2)
{
    std::cout << "Receiver::doDivide():Division of " <<n1 << " and " << n2 << " is "
              << n1 / n2 << " and remainder : " << n1 % n2 << std::endl;
}
