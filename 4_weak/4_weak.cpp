// 4_weak.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;

#include <iostream>
#include "MyInput.h"
#include "Animal.h"
#include "Database.h"

int main()
{
    MyInput input;
    std::unique_ptr<Animal> animal;
    Database db;

    std::cout << "4 week Hello World!\n";

    int iMenu = 0;
    int iType = 0;
    while (iMenu != 8) {
        cout << "\nEnter a menu option: ";
        cout << "\n 1) Add an Animal ";
        cout << "\n 2) Display All Animals";
        cout << "\n 3) Display by name";
        cout << "\n 4) Display by Type";
        cout << "\n 5) Remove All";
        cout << "\n 6) Load from file";
        cout << "\n 7) Save to load";
        cout << "\n 8) quit \n";

        iMenu = input.GetUserInt("asdf", 1, 8);
        switch (iMenu) {
        case 1:
            iType = 0;
            cout << "\n1) Fish" << "\n2) Bird";
            iType = input.GetUserInt(1, 2);
            switch (iType) {
            case 1:
                animal = db.Create(Animal::eType::Fish);
                break;
            case 2:
                animal = db.Create(Animal::eType::Bird);
                break;
            }//inner switch
            animal->read(cout, cin);
            db.Add(animal);
            break;
        case 2:
            db.DisplayAll(cout);
            break;
        case 3:
            db.DisplayByName(cout, cin);
            break;
        case 4:
            iType = 0;
            cout << "\n1) Fish" << "\n2) Bird";
            iType = input.GetUserInt(1, 2);
            switch (iType) {
            case 1:
                db.DisplayByType(cout, Animal::eType::Fish);
                break;
            case 2:
                db.DisplayByType(cout, Animal::eType::Bird);
                break;
            }//inner switch
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            db.Save(db.filename);
            break;

        }//Outer switch
    }//while
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
