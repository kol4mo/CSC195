#include "Animal.h"


void Animal::read(std::ostream& ostr, std::istream& istr) {
	ostr << "\n  Enter Animal name: ";
	istr >> this->name;
	ostr << "\n  Enter Animal lifespan: ";
	istr >> this->lifespan;
}