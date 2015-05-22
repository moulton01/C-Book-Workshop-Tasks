#include <iostream>
#include <string>
#include <fstream>

using namespace std; 

void playSelect();
void instructionSelect();
void exitSelect();
void calculator();
double calculator(string calculation, double input1, double input2);

int main(){

	string optionSelect;
	string secondOption;
	string calculation;
	double input1;
	double input2;
	

	do{
		cout << "please select an option from the list\n\n";

		playSelect();

		instructionSelect();

		calculator();

		exitSelect(); 
		cin >> optionSelect;

	} while (optionSelect != "play" && optionSelect != "instruction" && optionSelect != "exit" && optionSelect != "calculator");
	
	if (optionSelect == "calculator")
	{
		cout << "please enter the calculation you would like to perform\n (addition/subtract/multiply/divide)\n";
		getline(cin, calculation);

		cout << "\nplease enter your first number\n";
		cin >> input1;
		cout << "\nplease enter your second number\n";
		cin >> input2;

		calculator(calculation, input1, input2);
	}

	system("pause");

}

void playSelect(){

	cout << "Play!\n\n";

}
void calculator(){

	cout << "Calculator\n\n";

}
void instructionSelect(){

	cout << "Instructions!\n\n";

}
void exitSelect(){

	cout << "Exit\n\n";

}
double calculator(string calculation, double input1, double input2)
{
	

	if (calculation == "addition")
	{
		return input1 + input2;
	}
	else if (calculation == "subtract")
	{
		return input1 - input2;
	}
	else if (calculation == "multiply")
	{
		return input1 * input2;
	}
	else if (calculation == "divide")
	{
		return input1 / input2;
	}

	
}