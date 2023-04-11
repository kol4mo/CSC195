
#include <iostream>
using namespace std;

struct Person
{
	char name[32];
	int id;
};
void Square(int iParam) {
	iParam = iParam * iParam;
}
void SquareRef(int& iParam) {
	iParam = iParam * iParam;
}
void Double(int* iParam) {
	*iParam = (*iParam) * 2;
}

int main()
{
	// ** REFERENCE **
	//
	// declare an int variable and set the value to some number (less than 10)
	int myInt = 4;
	// declare a int reference and set it to the int variable above
	int& intRef = myInt;
	// output the int variable
	cout << "\nmyInt: " << myInt;
	// set the int reference to some number
	intRef = 7;
	// output the int variable
	cout << "\nmyInt: " << myInt;
	// what happened to the int variable when the reference was changed? it changed the first int cause it references myInt
	// output the address of the int variable
	cout << "\nmyInt Address: " << &myInt;
	// output the address of the int reference
	cout << "\nintRef Address: " << &intRef;
	// are the addresses the same or different? same
	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
		// in the function, multiply the int parameter by itself and assign it back to the parameter(i = i * i)
		// call the Square function with the int variable created in the REFERENCE section
	Square(myInt);
		// output the int variable to the console
	cout << "\nmyInt: " << myInt;
		// !! notice how the variable has not changed, this is because we only passed the value to the function !!
		// change the Square function to take a int reference
	SquareRef(intRef);
	cout << "\nmyInt: " << myInt;
		// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
		// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""
		// ** POINTER VARIABLE **
		//
		// declare an int pointer, set it to nullptr (it points to nothing)
	int* intPtr = nullptr;
		// set the int pointer to the address of the int variable created in the REFERENCE section
	intPtr = &myInt;
		// output the value of the pointer
	cout << "\nintPtr: " << intPtr;
		// what is this address that the pointer is pointing to? myInt
		// output the value of the object the pointer is pointing to (dereference the pointer)
	cout << "\nintPtr Value: " << *intPtr;
		// ** POINTER PARAMETER **
		//
		// create a function above main() called Double that takes in an int pointer parameter
		// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter(i = i * 2)
		// !! make sure to dereference the pointer to set the value and not set the address !!
		// call the Double function with the pointer created in the POINTER VARIABLE section
	Double(intPtr);
		// output the dereference pointer
	cout << "\nintPtr Value: " << *intPtr;
		// output the int variable created in the REFERENCE section
	cout << "\nmyInt: " << myInt;
		// did the int variable's value change when using the pointer? yes
		// ** ALLOCATION/DEALLOCATION **
		//
		// create an int pointer that points at an int allocated on the heap, set the allocated int value to some number
	int* intPtr2 = new int;
	*intPtr2 = 3;
		// output the pointer value, this should be the address of the int allocated on the heap
	cout << "\nintPtr2: " << intPtr2;
		// output the dereference pointer
	cout << "\nintPtr2 Value: " << *intPtr2;
		// deallocate the int pointer to free up the memory
	free(intPtr2);
	intPtr2 = NULL;
		// create an int pointer that points at an array of ints allocated on the heap, the array size should be 4 - 6
	intPtr2 = new int[4];
		// use a for loop and set each int in the array to a random number (use => rand() % 10 to get a random number
	for (int iCount = 0; iCount < 4; iCount++) {
		intPtr2[iCount] = rand() % 10;
	}
		// use a for loop and output each of the ints in the array
	for (int iCount = 0; iCount < 4; iCount++) {
		cout <<"\n" << intPtr2[iCount];
	}
		// use a for loop and output the address of each of the ints in the array
	for (int iCount = 0; iCount < 4; iCount++) {
		cout << "\n" << &intPtr2[iCount];
	}
		// deallocate the int pointer to free up the memory block (remember it's an array)
		// ** STRUCTURE **
		//
		// create a Person pointer that points at an array of Persons allocated on the heap, the array size should be 2
		// read in a name from the console and set it to the person name, do this for the id also, do this for both Persons
		// use a for loop and output the name and id of each person in the array
		// deallocate the person pointer to free up the memory block (remember it's an array)
}
