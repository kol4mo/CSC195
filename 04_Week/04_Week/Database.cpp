#include "Database.h"
#include "myInput.h"
#include "Animal.h"
#include <iostream>

int iType = 0;
myInput input;

std::unique_ptr<Animal> Database::create(Animal::eType type) {
	Animal* animal = nullptr;

	switch (type) {
	case Animal::eType::Bird:
		animal = new Bird;
		break;
	case Animal::eType::Fish:
		animal = new Fish;
		break;
	}
	return std::unique_ptr<Animal>{animal};
}

void Database::add(std::unique_ptr<Animal>& animal) {
	this->animal.push_back(std::move(animal));
	cout << "\n ***** List size = " << this->animal.size();
}
void Database::displayAll(std::ostream& ostr) {
	for (std::unique_ptr<Animal>& animal : this->animal) {
		//animal->write(ostr);
		ostr << animal;
	}
}

void Database::getByName(std::ostream& ostr, istream& istr, string sInput) {
	for (std::unique_ptr<Animal>& animal : this->animal) {
		if (animal->name.compare(sInput) == 0) {
			//animal->write(ostr);
			ostr << animal;
		}
	}
}

void Database::sortByType(std::ostream& ostr, istream& istr) {\
	cout << "\n1) Fish";
	cout << "\n2) Bird";
	iType = input.getUserInt(1, 2);
	for(std::unique_ptr<Animal>& animal : this->animal) {
		if ((int)animal->getType() == iType) {
			//animal->write(ostr);
			ostr << animal;
		}
	}
}

void Database::save(const string filename) {
	// open file
	std::ofstream output(filename, std::ofstream::out | std::ofstream::app); // Bitwise OR

	if (output.is_open()) {
		for (std::unique_ptr<Animal>& animal : this->animal) {
			//animal->write(output);
			output << animal;
		}
	}

	if (output.is_open()) {
		output.close();
	}
}

void Database::load(const string& filename) {
	int uType = 0;
	std::unique_ptr<Animal> animal;
	std::ifstream input(filename);

	this->removeAll();


	if (input.is_open()) {
		while(!input.eof()) {
			input >> iType;

			if (input.fail()) break;

			animal = this->create(static_cast<Animal::eType>(iType));
			//animal->read(inpit);
			input >> *animal;
			this->add(animal);
		} // end while
	} // end if

	if (input.is_open()) {
		input.close();
	}
}

void Database::removeAll() {
		this->animal.clear();
}
