//utils.h


#ifndef _UTILS_H
#define _UTILS_H

// HEAD
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <regex>
#include <time.h>
#include <math.h>
#include <unistd.h>
using namespace std;

//
// Init random generator
	void initRandomGenerator(int seed=0);

	// Get random integer in interval [min ; max]
	int getRandom(int min=0, int max=100);

	//// Conversions ////
	// Number to string
	string toString(int nb);
	string toString(double nb);
	string toString(bool nb);

	// String to string
	string toLower(string str);
	string toUpper(string str);
	string toFirstName(string str);

	// Number to character (0 -> A, 1 -> B, 2 -> C, ...)
	string toCharacter(int nb);

	// Character to number (A -> 0, B -> 1, C -> 2, ...)
	int toNumber(char character);
	int toNumber(string character);

	//// Screen ////
	// Clear screen (for linux)
	void clearScreen();

	// Delay program execution
	void delay(int timeMs);

	//// Text colors ////
	// Set text color, background color, bold and underline styles
	// Colors : {0, 1, 2, 3, 4, 5, 6, 7, 8} : {default, black, red, green, yellow, blue, magenta, cyan, white}
	string setTextColor(int textColor=0, int backgroundColor=0, bool isBold=false, bool isUnderline=false);

	// Reset text color and styles to default
	string resetTextColor();

	// Invert text color and background color
	string invertTextColor();

	// Reset (=remove) text color inversion
	string resetTextColorInversion();

	//// Date and time ////
	int todayYear();
	int todayMonth();
	int todayDay();
	int todayHour();
	int todayMinute();
	int todaySecond();

	//// Strings ////
	// Remove and return first/last char of string
	string removeFirstCharOfString(string& str);
	string removeLastCharOfString(string& str);

	//// Graphical elements ////
	// Draw progressBar
	string progressBar(int maxValue, int value, bool isColored=true, int color=0);

#endif