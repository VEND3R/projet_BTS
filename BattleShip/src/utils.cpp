#include "../include/utils.h"

//// Random numbers ////

void initRandomGenerator(int seed) {
    if (seed == 0) srand(time(NULL));
    else srand(seed);
}

int getRandom(int min, int max) {
    return rand() % (max - min + 1) + min;
}

//// Conversions ////

string toString(int nb) {
    std::ostringstream ss;
    ss << nb;
    return ss.str();
}

string toString(double nb) {
    std::ostringstream ss;
    ss << nb;
    return ss.str();
}

string toString(bool nb) {
    std::ostringstream ss;
    ss << nb;
    return ss.str();
}

string toLower(string str) {
    for (unsigned int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

string toUpper(string str) {
    for (unsigned int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
    }
    return str;
}

string toFirstName(string str) {
    if (str.length() > 0) str[0] = toupper(str[0]);
    for (unsigned int i = 1; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

string toCharacter(int nb) {
    std::ostringstream ss;
    ss << (char)(65 + nb);
    return ss.str();
}

int toNumber(char character) {
    if (character >= 'A' && character <= 'Z') return character - 'A';
    if (character >= '0' && character <= '9') return character - '0';
    if (character >= 'a' && character <= 'z') return character - 'a';
    return -1;
}

int toNumber(string character) {
    if (character.length() == 1) return toNumber(character[0]);
    return -1;
}

//// Screen ////

void clearScreen() {
    for (int i = 0; i < 100; i++) cout << "\n";
}

void delay(int timeMs) {
    usleep((long)1000 * (long)timeMs);
}

//// Text colors ////

string setTextColor(int textColor, int backgroundColor, bool isBold, bool isUnderline) {
    string str = "\033[";

    if (textColor > 0) str += toString(textColor + 29) + ";";
    if (backgroundColor > 0) str += toString(backgroundColor + 39) + ";";

    str += isBold ? "1;" : "21;";
    str += isUnderline ? "4" : "24";

    str += "m";
    return str;
}

string resetTextColor() {
    return "\033[0m";
}

string invertTextColor() {
    return "\033[7m";
}

string resetTextColorInversion() {
    return "\033[27m";
}

//// Date and time ////

int todayYear() {
    time_t now = time(NULL);
    struct tm today = *localtime(&now);
    return today.tm_year + 1900;
}

int todayMonth() {
    time_t now = time(NULL);
    struct tm today = *localtime(&now);
    return today.tm_mon + 1;
}

int todayDay() {
    time_t now = time(NULL);
    struct tm today = *localtime(&now);
    return today.tm_mday;
}

int todayHour() {
    time_t now = time(NULL);
    struct tm today = *localtime(&now);
    return today.tm_hour;
}

int todayMinute() {
    time_t now = time(NULL);
    struct tm today = *localtime(&now);
    return today.tm_min;
}

int todaySecond() {
    time_t now = time(NULL);
    struct tm today = *localtime(&now);
    return today.tm_sec;
}

//// Strings ////

string removeFirstCharOfString(string& str) {
    if (str.length() == 0) return "";
    string out = string(1, str[0]);
    str = str.substr(1);
    return out;
}

string removeLastCharOfString(string& str) {
    if (str.length() == 0) return "";
    string out = string(1, str.back());
    str = str.substr(0, str.length() - 1);
    return out;
}

//// Graphical elements ////

string progressBar(int maxValue, int value, bool isColored, int color) {
    string str = "";

    str += setTextColor(color, 0, true, false);
    str += "[";

    if (isColored) {
        if (value <= maxValue / 4) str += setTextColor(2, 0, true, false);
        else if (value <= maxValue / 2) str += setTextColor(4, 0, true, false);
        else str += setTextColor(3, 0, true, false);
    }

    for (int i = 1; i <= value; i++) str += "-";
    if (isColored) str += resetTextColor() + setTextColor(color, 0, true, false);

    for (int i = value + 1; i <= maxValue; i++) str += " ";

    str += "]";
    str += resetTextColor();
    return str;
}
