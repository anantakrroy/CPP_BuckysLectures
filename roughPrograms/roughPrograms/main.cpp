#include <iostream>
#include <string>
#include <ctime>
#include "Temperature.h"
#include "Birthday.h"
#include "People.h"

using namespace std;

class Context{
public:

	Context(string defaultCurr) {
		setCurrency(defaultCurr);
	}

	int randomNumberGenerator() {
		srand((unsigned int)time(0));
		return (1 + (rand() % 100));
	}

	int Sum(int a, int b) {
		return a + b;
	}

	void setCurrency(string curr) {
		currency = curr;
	}

	string getCurrency() {
		return currency ;
	}



private:
	string currency;
};

int main() {
		
	Birthday birthObj(12, 02, 1990);
	People peopleObj("Ananta", birthObj);
	peopleObj.printDOB();

	cout << "\n \n";

	int inputTemp;
	Temperature tempObject(inputTemp = 30);
	Temperature *tempPointer = &tempObject;

	Birthday bd(12,02,1990);
	bd.printBirthday();

	cout << "Enter the temperature: ";
	cin >> inputTemp;

	cout << "Hey! I accessed the class object through a pointer! ";
	tempPointer->printForPointer();  //use the -> arrow member selection operator to access methods using pointers

	if (inputTemp < 60 && inputTemp > -35 ) {
		Temperature tempDisplay(inputTemp);
	}
	else {
		
		cout << "You entered too high or too low temperature" <<
			"Default temperature is now set to: " ;
		Temperature tempDisplay(&inputTemp);
	}

	Context context("INR");
	cout << context.Sum(10, 15) << endl ;
	cout << context.getCurrency() << endl;

	cout << "Lets randomise things a bit " << context.randomNumberGenerator() << endl;
	cout << "Time for some array action" << endl;
	cout << "Element ------ Value" << endl << endl;

	int arr[9];
	for (int x = 0; x < 9; x++) {
		srand(x);
		arr[x] = rand() % 10;
		cout << "   " << x << "    ------   " << arr[x] << endl;
	}

	return 0;
}
