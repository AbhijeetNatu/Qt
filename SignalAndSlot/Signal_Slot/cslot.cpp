#include "cslot.h"
#include <iostream>

CSlot::CSlot(): QObject()
{

}

void CSlot::handlerFunction(int n1,int n2)
{
    std::cout << "Entered CSlot::memberFunction()" << std::endl;
    std::cout << "n1 :" << n1 << ", n2 : " << n2 << std::endl;
    std::cout << "Leaving CSlot::memberFunction()" << std::endl;
}
