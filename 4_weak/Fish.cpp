#include "Fish.h"
void Fish::read(std::ostream& ostr, std::istream& istr) {
	Animal::read(ostr, istr);
	ostr << "\n  Enter Fish number of fins: ";
	istr >> this->fins;
	ostr << "\n  Enter Fish number of Teeth: ";
	istr >> this->teeth;
	ostr << "\n  Enter Fish Habitat: ";
	istr >> this->habitat;
}