#include <iostream>
#include <string>

using namespace std; 

void performArithmetic(int *num1, int *num2, int *resultOne, int* resultTwo);

int main(){

	int num1, num2, result, resultTwo; 

	cout << "This program will display the result of multiplying and adding the values you input.\n\n";
	cout << "Please enter your first number...\n";
	cin >> num1; 
	cout << "\n\nPlease enter your second number...\n";
	cin >> num2;
	cout << "\n\n";

	performArithmetic(&num1, &num2, &result, &resultTwo);

	cout << result<<endl;
	cout << resultTwo<<endl; 
	system("pause");

}
void performArithmetic(int *num1, int *num2, int *resultOne, int* resultTwo)
{

	*resultOne = *num1 + *num2;

	*resultTwo = *num1 * *num2; 
	
}