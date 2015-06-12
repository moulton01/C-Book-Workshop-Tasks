#include <iostream>
#include <string>
#include <math.h>

using namespace std; 

void ConvertToEnglish(int number); 
void outputFirstHalf(int number); 
void outputSecondHalf(int number);
int NumberOfDigits(int number);

string NumsToTwenty[20] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Sever", "Eight", "Nine", "Ten", "Eleven", "Twelve",
"Thirteen", "Fourteen", "Fifthteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };

string TensNumsToText[10] = { "", "", "Twenty", "Thirty", "Fourty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };

int main()
{
	int userInput; 
	string input; 
	cout << "'Y'continue to number converter?\t'N' exit program?\n"; 
	cin >> input; 

	do {
		if (input == "N" || input == "n")
			break; 


		cout << "\nPlease enter a number between -999,999 and 999,999 to be convertered to english text....\n";
		cin >> userInput;

		if (userInput < 0)
			cout << "minus ";
		if (userInput == 0)
		{
			cout << "zero\n"; break;
		}
			
		if (NumberOfDigits(userInput) <= 6)
			ConvertToEnglish(abs(userInput));
		else
			cout << "number is too long...\n";
	} while (input == "Y" || input == "y"); 


}

int NumberOfDigits(int number)
{
	int counter = 0;
	int tempInt = number;
	while (tempInt != 0)
	{
		tempInt = tempInt / 10;
		counter++;
	}
	return counter;
}
void ConvertToEnglish(int number)
{
	int firstHalf, secondHalf; 

	firstHalf = number / 1000; 
	secondHalf = number % 1000; 

	outputFirstHalf(firstHalf); 
	outputSecondHalf(secondHalf); 
}
void outputFirstHalf(int number)
{
	int temp = number; 
	if (number < 0)
		cout << "minus ";

	cout << NumsToTwenty[number/100]; 
	
	if (number/100 > 0)
	{
		cout << " hundred"; 
	}
	temp = number % 100; 
	if (temp < 20)
	{
		cout << NumsToTwenty[temp] << " thousand, ";
	}
	else 
	{
		cout << " and " + TensNumsToText[temp/10] << " " << NumsToTwenty[temp % 10] << " thousand, ";
	}
		
}
void outputSecondHalf(int number)
{
	int temp = number;
	cout << NumsToTwenty[number / 100];

	if (number / 100 != 0)
	{
		cout << " hundred and ";
	}
	else
		cout << "and "; 

	temp = number % 100;
	if (temp < 20)
	{
		cout << NumsToTwenty[temp];
	}
	else
	{
		cout << TensNumsToText[temp / 10] << " " << NumsToTwenty[temp % 10] << endl;
	}

}