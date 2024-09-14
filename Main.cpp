// Charity Deel
// 07/20/2024
// CS-210

#include "Clock.h"
#include "Display.h"
#include <iostream>

using namespace std;

void handleUserChoice(int choice, Clock& clock);

int main() {
	Clock clock;
	Display display;
	int choice;
	int h, m, s;
	cout << "Enter initial time: ";
	cin >> h >> m >> s;

	// Loop for display and exiting 
	while (true) {
		display.showClocks(clock);
		display.showMenu();
		choice = display.getUserChoice();

		if (choice == 4) {
			break;
		}

		handleUserChoice(choice, clock);

		cout << endl;
	}

	return 0;
}

// builds each menu option case
void handleUserChoice(int choice, Clock& clock) {
	switch (choice) {
	case 1:
		clock.addHour();
		break;
	case 2:
		clock.addMinute();
		break;
	case 3:
		clock.addSecond();
		break;
	default:
		cout << "Invalid choice. Please try again." << endl;

	}

}


