#include "myInput.h"

int myInput::getUserInt(string prompt, unsigned short low, unsigned short high) {
	int iTemp = 0;
	do {
		cout << prompt;
		cout << "\nEnter a number between " << low << " and " << high << ":\n";
		cin >> iTemp;

		if (!cin.good()) {
			cin.clear();
			cin.ignore();
			cout << "\nImproper input!!";
			iTemp = low - 1;
		}
	} while ((iTemp < low) || (iTemp > high));
	return iTemp;
}

int myInput::getUserInt(unsigned short low, unsigned short high) {
	return getUserInt("", low, high);
}


string myInput::getUserString(string prompt) {
	string sTemp = "";
	do {
		sTemp = "";
		cout << prompt;
		cout << "\nEnter the name to sort by: ";
		cin >> sTemp;

		if (!cin.good()) {
			cin.clear();
			cin.ignore();
			cout << "\nImproper input!!";
		}
		return sTemp;
	} while (sTemp == "");
}