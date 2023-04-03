using namespace std;

#include <iostream>

int main() {
	const unsigned short maxDays = 14;
	const float Tax = 0.1f;

	string name;// get

	unsigned int uCount = 0; // get days worked
	unsigned short hours[maxDays]; //get days hours
	unsigned short totalHours = 0;
	float fGrossPay = 0; // calc - total hours * wage
	float netPay = 0;// calc - (gross pay - (gross Pay * tax))
	float fWage = 0; //get - per hour


	std::cout << "Hello World!\n";

	cout << "\nEnter your name : ";
	cin >> name;

	cout << "\nEnter your wage : ";
	cin >> fWage;

	cout << "\nEnter days worked: ";
	cin >> uCount;

	for (int iCount = 0; iCount < uCount; iCount++) {
		//Get values for hours worked
		cout << "\nHow many hours did you work on the " << iCount << " day: ";
		cin >> hours[iCount];
		totalHours += hours[iCount];
	}

	//Calc pay and taxes and output
	fGrossPay = totalHours * fWage;
	cout << "\nYour gross pay is : " << fGrossPay;
	netPay = (fGrossPay - (fGrossPay * Tax));
	cout << "\nYour net pay is : " << netPay;
	

	cout << "\nEnd of App";
}