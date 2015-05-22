#include <iostream>

using namespace std;

int main(){

	int guessedNum;
	int total = 0;


	do {
		cout << "please guess the number!\n";
		cin >> guessedNum;
		total = total + guessedNum;
		cout << "your running total of guesses is:\n" << total <<endl;
	} while (guessedNum != 0);
		cout << "congratulations you guessed correct!\n";
		system("pause");
}