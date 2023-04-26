#pragma once
#include <iostream>
#include<fstream>

using namespace std;
class Animal
{
public:
	enum class eType { Fish = 1, Bird = 2 };
public:
	string name;
	unsigned int lifespan;
	//string color;
public:
	virtual eType GetType() = 0;
	string GetTypeStr();
	string GetName() { return name; }
	void SetName(string val) { name = val; }
	void setLifespan(unsigned int span) { lifespan = span; }
	unsigned int getLifespan() { return lifespan; }

	virtual void read(std::ostream& ostr, std::istream& istr);
	virtual void write(std::ostream& ostr);

	virtual void read(std::ifstream& istr);
	virtual void write(std::ofstream& ostr);
};

