// 2_1_DataType.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    const unsigned short MAXEMP = 20;
    const Employee tempEmployee;

    std::cout << "2_1_DataTypes Hello World!\n";
    
    Employee workers[MAXEMP];
    unsigned short numEmployees = 0;

    cout << "\n Please enter the number of employees: ";
    cin >> numEmployees;
    if (numEmployees > MAXEMP) {
        numEmployees = MAXEMP;
    }

    for (int iCount = 0; iCount < numEmployees; iCount++) {
        //Call read for each employee
        //workers[iCount] = new Employee;
        //(*(workers[iCount])).Read();
        workers[iCount].Read();
    }

    for (int iCount = 0; iCount < numEmployees; iCount++) {
        //Call Write for each employee
        workers[iCount].Write();
        //(*(workers[iCount])).Write();
    }
    
    //workers[0].age = 23;
    //workers[0].Read();

    //Employee* empPtr = new Employee(); //Heap
    //empPtr = NULL;
    //empPtr = &workers[0];
    //empPtr->age = 42
    //void* ptr = malloc(20);
    //int* intPtr = new int; //if you use new it is on the heap

    //*intPtr = 42;
    //printf("\n x%00.x", *intPtr);
    //printf("\n x%00.x", *(intPtr + 1));
    //do stuff heap memory
    //cout << sizeof(Employee);

    //elete empPtr;

    //cout << "\n size1: " << (sizeof(workers)) / sizeof(workers[0]);
    //cout << "\n size2: " << std::size(workers);
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
