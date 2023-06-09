#include "Database.h"


std::unique_ptr<Animal> Database::Create(Animal::eType type) {
	Animal* animaladd = nullptr;

	switch (type) {
	case Animal::eType::Fish:
		animaladd = new Fish;
		break;
	case Animal::eType::Bird:
		animaladd = new Bird;
		break;
	}

	return std::unique_ptr<Animal>{animaladd};
}

void Database::Add(std::unique_ptr<Animal>& animal) {
	this->animals.push_back(std::move(animal));
	cout << "\n **** List size = " << this->animals.size();
}
void Database::DisplayAll(std::ostream& ostr) {
	for (std::unique_ptr<Animal>& animal : this->animals) {
		ostr << animal;
	}
}
void Database::DisplayByName(std::ostream& ostr, std::istream& istr) {
	string term;
	ostr << "please enter name: ";
	istr >> term;
	for (std::unique_ptr<Animal>& animal : this->animals) {
		if (animal == term) {
			ostr << animal;
		}
	}
}
void Database::DisplayByType(std::ostream& ostr, Animal::eType type) {
	for (std::unique_ptr<Animal>& animal : this->animals) {
		if (animal == type) {
			ostr << animal;
		}
	}
}
void Database::Save(const string filename) {
	//open file
	std::ofstream output(filename, std::ofstream::out | std::ofstream::app); //bitwise or

	if (output.is_open()) {
		for (std::unique_ptr<Animal>& animal : this->animals) {
			output << animal;
		}
	}

	if (output.is_open()) {
		output.close();
	}
}

void Database::removeAll() {
	this->animals.clear();
}

void Database::load(const string& filename) {
	//open file
	int iType = 0;
	std::ifstream output(filename); //bitwise or
	std::unique_ptr<Animal> _animal;
	this->removeAll();

	if (output.is_open()) {
		while (!output.eof()) {
			output >> iType;

			switch (iType) {
			case 1:
				_animal = this->Create(Animal::eType::Fish);
				break;
			case 2:
				_animal = this->Create(Animal::eType::Bird);
				break;
			}
			output >> _animal
			this->Add(_animal);
		}
	}

	if (output.is_open()) {
		output.close();
	}
}
