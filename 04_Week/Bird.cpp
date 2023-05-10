#include "Bird.h"

void Bird::read(std::ostream& ostr, std::istream& istr) {
	Animal::read(ostr, istr); // Get Animal Details

	// Get Bird Details
	ostr << "\nEnter wingspan: ";
	istr >> wingspan;
	ostr << "\nEnter number of eggs: ";
	istr >> numEggs;
}

void Bird::write(std::ostream& ostr) {
	Animal::write(ostr);
	ostr << "\nWingspan: " << this->wingspan;
	ostr << "\nNumber of Eggs: " << this->numEggs;
}

void Bird::read(std::ifstream& ifstr) {
	Animal::read(ifstr); // Get Animal Details

	// Get Bird Details
	ifstr >> wingspan;
	ifstr >> numEggs;
}

void Bird::write(std::ofstream& ofstr) {
	Animal::write(ofstr);
	ofstr << this->wingspan << std::endl;
	ofstr << this->numEggs << std::endl;
}