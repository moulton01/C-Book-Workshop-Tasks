#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int randRange();
void findNumber(int max, int min);

int max = 100;
int min = 1;
int playerInput;
int numOfGuesses = 0;
int randomNum;

int main(){
	//calls srand with the seed of current time. This ensures more legit random numbers.
	srand(time(NULL));

	
	
	int exit = 1;
	int selectCase;

	randomNum = randRange();

	
	cout << "choose 1 to guess the number... choose 2 to have the computer do it for you....\n\n";
	cin >> selectCase;

	switch (selectCase)
	{

		case 1:
			do {
				cout << "guess the number between 1 and 100.... \n\n";
				cin >> playerInput;

				if (playerInput > randomNum)
					cout << "your guess was too high!\n\n";
				else if (playerInput < randomNum)
					cout << "your guess was to low!\n\n";

				numOfGuesses++;

			} while (playerInput != randomNum);

			cout << "Congratulations, you guessed the number is..." << randomNum << endl;
			break;
		case 2:

				findNumber(max, min);
			
			cout << "Congratulations, the computer guessed the number is ...." << playerInput << "\nWith a total of " << numOfGuesses << "guesses\n";
			break;
	}
	system("pause");

}
int randRange(){

	return rand() % (max - min + 1) + min;
}
void findNumber(int max, int min){

	for (int i = min; i != randomNum; i++)
	{
		playerInput = i;
		numOfGuesses++;
	}

}