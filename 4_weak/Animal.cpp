#include "Animal.h"


void Animal::read(std::ostream& ostr, std::istream& istr) {
	ostr << "\n  Enter Animal name: ";
	istr >> this->name;
	ostr << "\n  Enter Animal lifespan: ";
	istr >> this->lifespan;
}

void Animal::write(std::ostream& ostr) {
	ostr << "\n\nName: " << this-> name;
	ostr << "\n Type: " << GetTypeStr();
	ostr << "\n lifespan: " << this-> lifespan;
}

void Animal::read(std::ifstream& istr) {
	istr >> this->name;
	istr >> this->lifespan;
}

void Animal::write(std::ofstream& ostr) {
	ostr << (int)this->GetType() << std::endl;
	ostr << this->name << std::endl;
	ostr << this->lifespan << std::endl;
}

string Animal::GetTypeStr() {
	switch (GetType()) {
	case eType::Fish:
		return "Fish";
	case eType::Bird:
		return "Bird";
	default:
		return "wtf";
	}
}

std::istream& operator >> (std::istream & istr, Animal& animal) {
	animal.read(std::cout, istr);
	return istr;
}