#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int randRange();

int main(){
	//calls srand with the seed of current time. This ensures more legit random numbers.
	srand(time(NULL));

	int playerInput;
	int coin;
	int exit = 1;

	do {
		cout << "1) Flip a coin.... 2) exit....\n\n";
		cin >> playerInput;

		switch (playerInput)
		{
		case 1:
			coin = randRange();
			if (coin == 1)
				cout << "Heads!\n\n";
			else
				cout << "Tails!\n\n";
			break;
		case 2:
			exit = 2;
			break;
		default:
			cout << "invalid Input\n\n";
			break;

		}
	} while (exit != 2);

	system("pause");

}
int randRange(){

	return rand() % (2 - 1 + 1) + 1;
}