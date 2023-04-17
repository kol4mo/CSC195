#include "MyInput.h"

int MyInput::GetUserInt(string prompt, unsigned short min, unsigned short max) {
	cout << prompt;
	return GetUserInt(min, max);
}
int MyInput::GetUserInt(unsigned short min, unsigned short max) {
	int iTemp = 0;
	do {
		cout << "\nEnter a number between " << min << " and " << max << ": ";
		cin >> iTemp;

		if (!cin.good() || iTemp < min || iTemp > max) {
			cin.clear();
			cin.ignore();
			cout << "\n  Improper Input!";
			iTemp = min - 1;
		}
	} while ((iTemp < min) || (iTemp > max));
	return iTemp;
}