#pragma once
#include "Animal.h"
#include "Fish.h"
#include "Bird.h"
#include <list>

class Database
{
public:
	const string filename = "testFile.txt";
private:
	std::list<std::unique_ptr<Animal>> animal;
public:
	std::unique_ptr<Animal> create(Animal::eType type);
	void add(std::unique_ptr<Animal>& animal);
	void displayAll(std::ostream& ostr);
	void getByName(std::ostream& ostr, istream& istr, string sInput);
	void sortByType(std::ostream& ostr, istream& istr);
	void save(const string filename);
	void load(const string& filename);
	void removeAll();
};

