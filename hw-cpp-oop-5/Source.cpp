#include <iostream>
#include "MyString.h"


int main()
{
    MyString obj1("Hello world");
    MyString obj2("Hello");

    obj1.Print();
    obj2.Print();
    obj1.MyStrStr("lo");
}