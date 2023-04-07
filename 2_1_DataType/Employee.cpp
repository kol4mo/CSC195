
using namespace std;
#include "Employee.h"
#include <iostream>


const unsigned short maxDays = 14;
const float Tax = 0.1f;


Employee::Employee() {

}

void Employee::Read() {
	cout << "\nEnter your name : ";
	cin >> name;

	cout << "\nEnter your wage : ";
	cin >> fWage;

	cout << "\nEnter days worked: ";
	cin >> daysWorked;

	for (int iCount = 0; iCount < daysWorked; iCount++) {
		//Get values for hours worked
		cout << "\nHow many hours did you work on the " << (iCount + 1) << " day: ";
		cin >> hoursPerDay[iCount];
		totalHours += hoursPerDay[iCount];
	}

	//Calc pay and taxes 
	fGrossPay = totalHours * fWage;
	netPay = (fGrossPay - (fGrossPay * Tax));
}

void Employee::Write() {
	cout << "\nname: " << name;
	cout << "\n  Wage: " << fWage;
	cout << "\n  Gross Pay: " << fGrossPay;
	cout << "\n  Net Pay: " << netPay << "\n";
}