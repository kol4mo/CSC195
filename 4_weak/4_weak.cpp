// 4_weak.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;

#include <iostream>
#include "MyInput.h";

int main()
{
    MyInput input;
    std::cout << "4 week Hello World!\n";

    int iMenu = 0;
    while (iMenu < 6) {
        cout << "\nEnter a menu option: ";

        cout << "\n  6) quit \n";
        iMenu = input.GetUserInt("asdf", 1, 6);
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
