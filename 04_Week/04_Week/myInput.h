#pragma once
#include <iostream>
using namespace std;

class myInput
{
public:
	int getUserInt(string prompt, unsigned short low, unsigned short high);
	int getUserInt(unsigned short low, unsigned short high);
	string getUserString(string prompt);
};

