#include <iostream>
#include <string>

using namespace std; 

void enterName(string *p_First, string *p_Second);

int main() {

	string firstName, secondName; 
	//string* p_First = &firstName; 
	//string* p_Second = NULL; 

	enterName(&firstName, &secondName);

	system("pause");

}
void enterName(string *p_First, string *p_Second)
{
	cout << "Please enter your first name\n"; 
	cin >> *p_First; 
	
	cout << "\nPlease enter your second name\n";
	cin >> *p_Second;
	

	cout << *p_First + " " + *p_Second <<endl; 

}