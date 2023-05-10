#include "Fish.h"

void Fish::read(std::ostream& ostr, std::istream& istr) {
		Animal::read(ostr, istr); // Get Animal Details

		// Get Fish Details
		ostr << "\nEnter number of fins: ";
		istr >> numFins;
		ostr << "\nEnter number of teeth: ";
		istr >> numTeeth;
	}

void Fish::write(std::ostream& ostr) {
	Animal::write(ostr);
	ostr << "\nNumber of Fins: " << this->numFins;
	ostr << "\nNumber of Teeth: " << this->numTeeth;
	ostr << "\nHabitat: " << this->habitat;
}

void Fish::read(std::ifstream& ifstr) {
	Animal::read(ifstr); // Get Animal Details

	// Get Fish Details
	ifstr >> numFins;
	ifstr >> numTeeth;
}

void Fish::write(std::ofstream& ofstr) {
	Animal::write(ofstr);
	ofstr << this->numFins << std::endl;
	ofstr << this->numTeeth << std::endl;
	ofstr << this->habitat << std::endl;
}
