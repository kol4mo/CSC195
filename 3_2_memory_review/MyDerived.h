#pragma once
#include "myBase.h"

class MyDerived : public myBase
{
public:
	int addSomething(int initVal);
	int SubSomething(int initVal) {
		return initVal - 42;
	}
};

