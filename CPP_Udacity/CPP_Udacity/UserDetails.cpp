/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number.
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/


#include "UserDetails.h"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

UserDetails::UserDetails()
{

		string user1;
		//string user2;

		string phone1;
		//long int phone2;

		string address1;
		//string address2;

		cout << "Enter name of User1:" << endl;
		getline(cin, user1);
		cout << "Enter address of User1:" << endl;
		getline(cin, address1);
		cout << "Enter phone of user1:" << endl;
		getline(cin, phone1);

		cout << "   User1    " << endl;
		cout << "\t Name: " << user1 << endl;
		cout << "\t Address: " << address1 << endl;
		cout << "\t Phone " << phone1 << endl;

		system("pause");

}


