#include <iostream>
#include <string>
#include "Struct.h"
#include <vector>
using namespace std; 

int main(){

	vector <PersonalDetails> AddressBook; 
	int input, index;
	bool exit = false; 
	string yesNo; 

	do{
		cout << "\n1.Add new entries\n2.Display List\n3.Exit\n";
		cin >> input;

		switch (input)
		{
		case 1:
			AddressBook.push_back(AddNewEntry());
			break;
		case 2:
			DisplayAll(AddressBook);
			cout << "\nWould you like to see the full details for a contact? (Yes or No) \n";
			cin >> yesNo; 
			if (yesNo == "yes" || yesNo == "Yes")
			{
				cout << "\nplease enter the ID for the persons details you would like to display.\n";
				cin >> index;
				DisplayDetailed(AddressBook, index);
			}
			else
			break;
		case 3:
			exit = true;
			break;
		}
	} while (!exit);

	system("pause");

}