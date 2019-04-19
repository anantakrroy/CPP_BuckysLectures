#include "Temperature.h"
#include <iostream>
#include <string>

using namespace std;

Temperature::Temperature(int currentTemp)
{
	int toFahrenheit = (currentTemp * 9 / 5) + 32;
	cout << "The temperature today is  " << currentTemp << " C or " << toFahrenheit << " F" << endl;
}

Temperature::Temperature(int *defaultTemp) {
	*defaultTemp = 30;
}

void Temperature::printForPointer() {
	cout << "I told you so!" << endl;
}