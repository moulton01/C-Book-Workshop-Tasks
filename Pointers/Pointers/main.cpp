#include <iostream>
#include <string>

using namespace std; 
void EnterName(string *p_First, string *p_Second);
int main(){
	string* p_FirstName = NULL; 
	string* p_SecondName = NULL; 


	(EnterName(p_FirstName, p_SecondName));

	cout << *p_FirstName; 
	cout << *p_SecondName; 
};
void EnterName(string* First, string* Second){

	string tempFirst, tempSecond; 

	cout << "Please enter you first name";
	cin >> tempFirst; 
	cout << "Please enter you second name"; 
	cin >> tempSecond; 

	tempFirst = *First; 
	tempSecond = *Second; 

}