// Charity Deel
// 07/20/2024
// CS-210
#pragma once
#ifndef DISPLAY_H
#define DISPLAY_H

#include "Clock.h"

class Display {
public:
	void showClocks(const Clock& clock) const;
	void showMenu() const;
	int getUserChoice() const;
};

#endif