#pragma once

#include <string>
#include "Birthday.h"

using namespace std;

class People
{
public:
	People(string x, Birthday dob);
	void printDOB();

private:
	string name;
	Birthday dateOfBirth;
};

