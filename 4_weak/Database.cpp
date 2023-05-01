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
	this->animal.push_back(std::move(animal));
	cout << "\n **** List size = " << this->animal.size();
}
void Database::DisplayAll(std::ostream& ostr) {
	for (std::unique_ptr<Animal>& animal : this->animal) {
		animal->write(ostr);
	}
}
void Database::DisplayByName(std::ostream& ostr, std::istream& istr) {
	string term;
	ostr << "please enter name: ";
	istr >> term;
	for (std::unique_ptr<Animal>& animal : this->animal) {
		if (animal->name.compare(term) == 0) {
			animal->write(ostr);
		}
	}
}
void Database::DisplayByType(std::ostream& ostr, Animal::eType type) {
	for (std::unique_ptr<Animal>& animal : this->animal) {
		if (animal->GetType() == type) {
			animal->write(ostr);
		}
	}
}
void Database::Save(const string filename) {
	//open file
	std::ofstream output(filename, std::ofstream::out | std::ofstream::app); //bitwise or

	if (output.is_open()) {
		for (std::unique_ptr<Animal>& animal : this->animal) {
			animal->write(output);
		}
	}

	if (output.is_open()) {
		output.close();
	}
}

void Database::removeAll() {
	this->animal.clear();
}

void Database::load(const string& filename) {
	//open file
	std::ofstream output(filename); //bitwise or
	this->removeAll();

	if (output.is_open()) {
		for (std::unique_ptr<Animal>& animal : this->animal) {
			//animal->write(output);
		}
	}

	if (output.is_open()) {
		output.close();
	}
}
