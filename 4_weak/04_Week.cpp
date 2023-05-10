// 04_Week.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "myInput.h"
#include "Animal.h"
#include "Database.h"
using namespace std;

int main()
{
    myInput input;
    std::unique_ptr<Animal> animal;
    Database db;
    int iType = 0;
    string sInput = "";

    std::cout << "04_Week Hello World!\n";

    int iMenu = 0;

    while (iMenu != 8) {
        cout << "\nEnter a menu option: ";
        cout << "\n1) Add an animal";
        cout << "\n2) Display all animals";
        cout << "\n3) Display by name";
        cout << "\n4) Display by type";
        cout << "\n5) Remove all";
        cout << "\n6) Load from file";
        cout << "\n7) Save to file";
        cout << "\n8) Quit\n";

        iMenu = input.getUserInt(1, 8);
        switch (iMenu) {
        case 1:
            iType = 0;
            cout << "\n1) Fish";
            cout << "\n2) Bird";
            iType = input.getUserInt(1, 2);
            switch (iType) {
            case 1:
                animal = db.create(Animal::eType::Fish);
                break;
            case 2:
                animal = db.create(Animal::eType::Bird);
                break;
            } //Inner case
            animal->read(cout, cin);
            db.add(animal);
            break;
        case 2:
            db.displayAll(cout);
            break;
        case 3:
            //sInput = input.getUserString("\nEnter a value: ");
            //db.getByName(cout, cin, sInput);

            cout << animal;
            cin >> *animal;

            filestream << animal;

            /*if (animal == "Bob")
                cout << "This is Bob!";

            if (animal == Animal::eType::Bird)
                cout << "This is a bird";
                */
            break;
        case 4:
            db.sortByType(cout, cin);
                break;
          case 5:
              db.removeAll();
              break;
          case 6:
              db.load(db.filename);
              break;
          case 7:
              db.save(db.filename);
              break;
            } // Outer switch
        } // While 
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
