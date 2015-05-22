#include <iostream>
#include <string>


using namespace std;

void playSelect();
void instructionSelect();
void exitSelect();
void calculator();
void bottlesOfBeerSelect();
void bottlesOfBeer();

double subtract(double input1, double input2);
double add(double input1, double input2);
double calculator(string calculation, double input1, double input2);
double multiply(double input1, double input2);
double divide(double input1, double input2);

int main(){

	int optionSelect;
	string secondOption;
	string calculation;
	double input1;
	double input2;


	do{
		cout << "please select an option from the list\n\n";

		playSelect();

		instructionSelect();

		calculator();

		bottlesOfBeerSelect();

		exitSelect();
		cin >> optionSelect;

		switch (optionSelect)
		{
		case 1:
			cout << "Game Playing\n";
			break;
		case 2:
			cout << "Intructions, choose a number to select a option\n";
			break;
		case 3:
			cout << "please enter the calculation you would like to perform\n (addition/subtract/multiply/divide)\n";
				cin >> calculation;

				cout << "\nplease enter your first number\n";
				cin >> input1;
				cout << "\nplease enter your second number\n";
				cin >> input2;

				cout << "The result of your calculation is: " <<calculator(calculation, input1, input2) <<endl;
				break;
		case 4:
			bottlesOfBeer();
			break;
		case 5:
			cout << "Exiting application";
			break;
		}

	} while (optionSelect != 1 && optionSelect != 2 && optionSelect != 3 && optionSelect != 5 && optionSelect != 4);



	system("pause");

}
void bottlesOfBeer(){

	for (int i = 0; i < 100; i++)
	{
		cout << i << " bottles of beer on the wall.\n";
	}

}
void bottlesOfBeerSelect(){

	cout << "4.Beer song!\n\n";

}
void playSelect(){

	cout << "1.Play!\n\n";

}
void calculator(){

	cout << "3.Calculator\n\n";

}
void instructionSelect(){

	cout << "2.Instructions!\n\n";

}
void exitSelect(){

	cout << "5.Exit\n\n";

}
double calculator(string calculation, double input1, double input2)
{


	if (calculation == "addition")
	{
		double result = add(input1, input2);
		return result;
	}
	else if (calculation == "subtract")
	{
		double result = subtract(input1, input2);
		return result;
	}
	else if (calculation == "multiply")
	{
		double result = multiply(input1, input2);
		return result;
	}
	else if (calculation == "divide")
	{
		double result = divide(input1, input2);
		return result;
	}

	return 0;
}
double add(double input1, double input2){

	return input1 + input2;

}
double subtract(double input1, double input2){

	return input1 - input2;

}
double multiply(double input1, double input2){

	return input1 * input2;

}
double divide(double input1, double input2){

	return input1 / input2;
	
}
