#include "csignal.h"
#include <iostream>

CSignal::CSignal(): QObject()
{

}

void CSignal::trigger(int dataOne,int dataTwo)
{
    std::cout <<" ENTERED CSignal::trigger() " << std::endl;
    std::cout <<" CSignal::trigger() : Emitting Signal f() using dataOne and dataTwo as data.." << std::endl;
    std::cout <<" CSignal::trigger() :dataOne : " << dataOne <<std::endl;
    std::cout <<" CSignal::trigger() :dataTwo : " << dataTwo <<std::endl;
    emit f(dataOne,dataTwo);
    std::cout << "CSIGNAL::trigger() : At this point , SLOT has already executed" << std::endl;
    std::cout <<" LEAVING CSignal::trigger() " << std::endl;
}
