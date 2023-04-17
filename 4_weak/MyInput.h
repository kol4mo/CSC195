#pragma once
#include <iostream>
using namespace std;

class MyInput
{
public:
	int GetUserInt(string prompt, unsigned short min, unsigned short max);
	int GetUserInt(unsigned short min, unsigned short max);
};

