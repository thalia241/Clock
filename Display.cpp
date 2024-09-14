// Charity Deel
// 07/20/2024
// CS-210

#include "Display.h"
#include <iostream>

using namespace std;

// shows both clocks
void Display::showClocks(const Clock& clock) const {
	cout << "****************************     **************************" << endl;
	cout << "*       12-Hour Clock      *     *     24-Hour Clock      *" << endl;
	cout << "*     ";
	clock.display12HourFormat();
	cout << "      *     *     ";
	clock.display24HourFormat();
	cout << "     *" << endl;
	cout << "****************************     **************************" << endl;
	cout << endl;
}

// shows menu options
void Display::showMenu() const {
	cout << "***************************" << endl;
	cout << "* 1-Add One Hour          *" << endl;
	cout << "* 2-Add One Minute        *" << endl;
	cout << "* 3-Add One Second        *" << endl;
	cout << "* 4-Exit Program          *" << endl;
	cout << "**************************" << endl;
}

// allows for user input to choose from menu options
int Display::getUserChoice() const {
	int choice;
	cout << "Enter your choice: ";
	cin >> choice;
	return choice;
}