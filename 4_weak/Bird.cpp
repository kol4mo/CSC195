#include "Bird.h"

void Bird::read(std::ostream& ostr, std::istream& istr) {
	Animal::read(ostr, istr);
	ostr << "\n  Enter Bird number of eggs: ";
	istr >> this->eggs;
	ostr << "\n  Enter Bird wingspan: ";
	istr >> this->wingspan;
}

void Bird::write(std::ostream& ostr) {
	Animal::write(ostr);
	ostr << "\n Eggs: " << this-> eggs;
	ostr << "\n Wingspan: " << this-> wingspan;
}

void Bird::read(std::ifstream& istr) {
	Animal::read(istr);
	istr >> this->eggs;
	istr >> this->wingspan;
}

void Bird::write(std::ofstream& ostr) {
	Animal::write(ostr);
	ostr << this->eggs << std::endl;
	ostr << this->wingspan << std::endl;
}