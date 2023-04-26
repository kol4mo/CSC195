#pragma once
#include "Animal.h"
#include "Fish.h"
#include "Bird.h"
#include <list>
class Database
{
private:
	std::list<std::unique_ptr<Animal>> animal;

public:
	std::unique_ptr<Animal> Create(Animal::eType type);
	void Add(std::unique_ptr<Animal>& animal);
	void DisplayAll(std::ostream& ostr);
	void DisplayByName(std::ostream& ostr, std::istream& istr);
	void DisplayByType(std::ostream& ostr, Animal::eType type);
	void Save(const string filename);
	const string filename = "testFile.txt";
};

