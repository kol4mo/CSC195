// 3_2_memory_review.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MyConfig.h"
#include "MyDerived.h"

int main()
{
    std::cout << "03 week Hello World!\n";

    int myInt = 5;
    int* intPtr = &myInt;
    int& intRef = myInt;

    std::cout << intRef;
    std::cout << "\n" << intPtr;

    Config myConfig;
    myConfig.Version.major = 1;

    myBase base;
    MyDerived der;
    std::cout << "\n\n AddSomething" << der.addSomething(2);
}

