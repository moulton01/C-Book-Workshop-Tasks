#include <iostream>
#include <string>
using namespace std;

int main(){

	string calculation; 
	

	double input1;
	double input2; 

	cout << "please enter the calculation you would like to perform\n (addition/subtract/multiply/divide)\n";
	getline(cin, calculation);

	cout << "\nplease enter your first number\n";
	cin >> input1;
	cout << "\nplease enter your second number\n";
	cin >> input2; 

	if (calculation == "addition")
	{
		cout << "number 1 + number 2 is\n" << input1 + input2 << endl;
	}
	else if (calculation == "subtract")
	{
		cout << "number 1 - number 2 is\n" << input1 - input2 << endl;
	}
	else if (calculation == "multiply")
	{
		cout << "number 1 * number 2 is\n" << input1 * input2 << endl;
	}
	else if (calculation == "divide")
	{
		cout << "number 1 / number 2 is\n" << input1 / input2 << endl;
	}

	system("pause");
}