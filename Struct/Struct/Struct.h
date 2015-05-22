#include <string>
#include <vector>
using namespace std; 


struct PersonalDetails{

	string name; 
	string streetName;
	int houseNum;
	string phoneNum;

};
void DisplayAll(vector <PersonalDetails> &AddressBook)
{	
	int ID = 0; 
	cout << "The list contains:\n";
	for (int i = 0; i < AddressBook.size(); i++)
	{
		cout << "\nName: " << AddressBook[i].name
			 << "	ID: " << ID; 
		ID++; 
	}
}
void DisplayDetailed(vector <PersonalDetails> &AddressBook, int index)
{
	cout << "\nName: " << AddressBook[index].name
		<< "\nTelephone Number: " << AddressBook[index].phoneNum
		<< "\nHouse Number: " << AddressBook[index].houseNum
		<< "\nStreet Name: " << AddressBook[index].streetName
		<< "\n";

}
PersonalDetails AddNewEntry()
{
	PersonalDetails person; 
	cout << "Please enter your personal Details.\n"
		<< "Your First Name.\n";
	cin >> person.name;

	cout << "\nYour Phone Number\n";
	cin >> person.phoneNum;

	cout << "\nYour House Number\n";
	cin >> person.houseNum;

	cout << "\nYour Street Name\n";
	cin >> person.streetName;
	cout << "\n";

	return person; 
	

}
