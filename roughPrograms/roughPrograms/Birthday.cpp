#include "Birthday.h"
#include <iostream>

using namespace std;

Birthday::Birthday(int dd, int mm, int yyyy)
{
	day = dd;
	month = mm;
	year = yyyy;
}

void Birthday::printBirthday() {
	cout << "your birthday is ";
	cout << day << "/" << month << "/" << year;

}
