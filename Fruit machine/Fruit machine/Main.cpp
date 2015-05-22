#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int slot[3];

int randRange();
int checkWin();
void displayWinning();
int main(){

	int i;
	int playerInput;

	slot[0] = randRange();
	slot[1] = randRange();
	slot[2] = randRange();

	srand(time(NULL));

	do{

		slot[0] = randRange();
		slot[1] = randRange();
		slot[2] = randRange();

		cout << "press 1 to play the slot machine!!!\n\n";
		cin >> playerInput;

		if (playerInput = 1)
		{
			cout << "Slot 1!          Slot 2!          Slot 3!\n";
			cout << "  " << slot[0] << "                " << slot[1] << "                " << slot[2] << "\n\n";

		}
		else
			cout << "Sorry Invalid Input";

		i = checkWin();

	} while (i != 1);

	displayWinning();
	

	system("pause");
}
int randRange(){


	return rand() % (5 - 1 + 1) + 1;


}
int checkWin(){

	if (slot[0] == slot[1] && slot[1] == slot[2])
		return 1;
	else
		return 0;


}
void displayWinning(){

	if (slot[0] == 1)
		cout << "congratulations you have won 1 pound for matching three " << slot[0] << "'s\n";
	if (slot[0] == 2)
		cout << "congratulations you have won 2 pound for matching three " << slot[0] << "'s\n";
	if (slot[0] == 3)
		cout << "congratulations you have won 3 pound for matching three " << slot[0] << "'s\n";
	if (slot[0] == 4)
		cout << "congratulations you have won 4 pound matching three " << slot[0] << "'s\n";
	if (slot[0] == 5)
		cout << "congratulations you have won 5 pound matching three " << slot[0] << "'s\n";

}