#include "Bird.h"

void Bird::read(std::ostream& ostr, std::istream& istr) {
	Animal::read(ostr, istr);
	ostr << "\n  Enter Bird number of eggs: ";
	istr >> this->eggs;
	ostr << "\n  Enter Bird wingspan: ";
	istr >> this->wingspan;
}
