#ifndef _XXXXX_H
#define _XXXXX_H



////////////////////////////////////////////////////////////////////////////////
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
#include "utils.h"
using namespace std;



////////////////////////////////////////////////////////////////////////////////
// CLASS
class XxXxx {

	//////////////////////////////
	// MEMBERS
public:



	//////////////////////////////
	// METHODS
public:
	// Constructors
	XxXxx();

	// Displayers
	string toString() const;
	friend ostream& operator <<(ostream& sout, const XxXxx& xxXxx);

};


#endif
