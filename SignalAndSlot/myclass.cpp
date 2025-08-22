#include "myclass.h"

MyClass::MyClass() : QObject() {}

void MyClass::trigger(int num1,int num2)
{
    emit f(num1,num2);
}

int main(void)
{
    MyClass myobj1 , myobj2;

    myobj1.trigger(100,200);        //Trigger event f() with 100,200 as event data
    myobj2.trigger(300,400);        //Trigger event f() with 300,400 as event data

    return 0;
}
