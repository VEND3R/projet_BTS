#ifndef _UTILS_H
#define _UTILS_H

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

// Init random generator
void initRandomGenerator(int seed=0);

// Get random integer in interval [min ; max]
int getRandom(int min=0, int max=100);

//// Conversions ////
string toString(int nb);
string toString(double nb);
string toString(bool nb);

string toLower(string str);
string toUpper(string str);
string toFirstName(string str);

string toCharacter(int nb);

int toNumber(char character);
int toNumber(string character);

//// Screen ////
void clearScreen();
void delay(int timeMs);

//// Text colors ////
string setTextColor(int textColor=0, int backgroundColor=0, bool isBold=false, bool isUnderline=false);
string resetTextColor();
string invertTextColor();
string resetTextColorInversion();

//// Date and time ////
int todayYear();
int todayMonth();
int todayDay();
int todayHour();
int todayMinute();
int todaySecond();

//// Strings ////
string removeFirstCharOfString(string& str);
string removeLastCharOfString(string& str);

//// Graphical elements ////
string progressBar(int maxValue, int value, bool isColored=true, int color=0);

#endif
