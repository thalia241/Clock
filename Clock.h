// Charity Deel
// 07/20/2024
//CS-210

#pragma once
#ifndef CLOCK_H
#define CLOCK_H

class Clock {
public:
	Clock(int h = 0, int m = 0, int s = 0); // initial time constructed
	void addHour();
	void addMinute();
	void addSecond();
	void display12HourFormat() const;
	void display24HourFormat() const;

private:
	int hour;
	int minute;
	int second;


};

#endif