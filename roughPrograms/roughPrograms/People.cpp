#include "People.h"
#include "Birthday.h"
#include <iostream>


using namespace std;

People::People(string x, Birthday dob)
	: name(x),dateOfBirth(dob)			//always use a member initialised list when using a class inside another class
{
}

void People::printDOB() {
	cout << name << " was born on ";
	dateOfBirth.printBirthday();
}
