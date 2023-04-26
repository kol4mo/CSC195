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

void Fish::write(std::ostream& ostr) {
	Animal::write(ostr);
	ostr << "\n Fins: " << this-> fins;
	ostr << "\n Teeth: " << this-> teeth;
	ostr << "\n habitat: " << this-> habitat;
}

void Fish::read(std::ifstream& istr) {
	Animal::read(istr);
	istr >> this->fins;
	istr >> this->teeth;
	istr >> this->habitat;
}

void Fish::write(std::ofstream& ostr) {
	Animal::write(ostr);
	ostr << this->fins << std::endl;
	ostr << this->teeth << std::endl;
	ostr << this->habitat << std::endl;
}