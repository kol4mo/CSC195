#pragma once
class Employee
{
public:
	char name[33];
	float fWage = 0; //get - per hour
	int daysWorked = 0;
	float hoursPerDay[7];
	unsigned short totalHours = 0;
	float fGrossPay = 0; // calc - total hours * wage
	float netPay = 0;// calc - (gross pay - (gross Pay * tax))
public: 
	Employee();//constructor
	~Employee();//destructor
	void Read();
	void Write();
};

