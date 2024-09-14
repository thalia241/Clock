// Charity Deel
// 07/20/2024
// CS-210

#include "Clock.h"
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

// initializes time to begin
Clock::Clock(int h, int m, int s) : hour(h), minute(m), second(s) {}


// adds an hour
void Clock::addHour() {
	hour = (hour + 1) % 24;
}

// adds a minute
void Clock::addMinute() {
	minute = (minute + 1) % 60;
	if (minute == 0) addHour();

}

// adds a second
void Clock::addSecond() {
	second = (second + 1) % 60;
	if (second == 0) addMinute();
}

// displays the 12 hr format
void Clock::display12HourFormat() const {
	int displayHour = hour % 12;
	if (displayHour == 0) displayHour = 12;
	cout << setw(2) << setfill('0') << displayHour << ":"
		<< setw(2) << setfill('0') << minute << ":"
		<< setw(2) << setfill('0') << second << (hour >= 12 ? " P M" : " A M");
}

// Displays the 24 hr format
void Clock::display24HourFormat() const {
	cout << setw(2) << setfill('0') << hour << ":"
		<< setw(2) << setfill('0') << minute << ":"
		<< setw(2) << setfill('0') << second;
}