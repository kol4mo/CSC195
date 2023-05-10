#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class Animal
{
public:
	enum class eType {
		Fish = 1,
		Bird = 2
	};
	string name = "";
	unsigned int lifespan = 0;


public:
	virtual eType getType() = 0; // Pure Virtual Method
	string getTypeStr();
	void setName(string val) { name = val; }
	string getName() { return name; }
	void setLifespan(unsigned int span) { lifespan = span; }
	unsigned int getLifespan() { return lifespan; }

	virtual void read(std::ostream& ostr, std::istream& istr);
	virtual void write(std::ostream& ostr);
	
	virtual void read(std::ifstream& ifstr);
	virtual void write(std::ofstream& ofstr);

	// 5-3
	friend bool operator == (const std::unique_ptr<Animal>& animal, const std::string& name) { return (name == animal->getName()); }
	friend bool operator == (const std::unique_ptr<Animal>& animal, const Animal::eType& name) { return (name == animal->getType()); }

	friend std::istream& operator >> (std::istream& istream, Animal& animal);
	friend std::ostream& operator << (std::ostream& ostream, Animal& animal);

	// create file write for fostr << animal
	friend std::ofstream& operator << (std::ofstream& fostr, Animal& animal);
	// create file read for fistr >> animal
	friend std::ifstream& operator >> (std::ifstream& fistr, Animal& animal);
};