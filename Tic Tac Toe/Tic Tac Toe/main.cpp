#include <iostream>
#include <conio.h>


using namespace std; 

char Coords[10] = { 'o','1', '2', '3', '4', '5', '6', '7', '8', '9' };
void board();
int checkWin();

enum boardPosition {
	Top_Left = 1,
	Top_Mid = 2,
	Top_Right = 3,
	Mid_Left = 4,
	Mid_Middle = 5,
	Mid_Right = 6,
	Bot_Left = 7,
	Bot_Mid = 8,
	Bot_Right = 9,


};

int main(){
	int i;
	int player = 1;
	char player1 = 'X';
	char player2 = 'O';
	int choice;
	bool won = false; 
	char current = player1;

	

	do {
		board();
	
		cout << current << " choose your square via number...\n";
		cin >> choice;


		if (choice == 1 && Coords[1] == '1')
			Coords[1] = current;
		else if (choice == 2 && Coords[2] == '2')
			Coords[2] = current;
		else if (choice == 3 && Coords[3] == '3')
			Coords[3] = current;
		else if (choice == 4 && Coords[4] == '4')
			Coords[4] = current;
		else if (choice == 5 && Coords[5] == '5')
			Coords[5] = current;
		else if (choice == 6 && Coords[6] == '6')
			Coords[6] = current;
		else if (choice == 7 && Coords[7] == '7')
			Coords[7] = current;
		else if (choice == 8 && Coords[8] == '8')
			Coords[8] = current;
		else if (choice == 9 && Coords[9] == '9')
			Coords[9] = current;
		else
		{
			cout << "invalid move! try again";

		}

		if (current == player1)
		{
			current = player2;
		}
		else
		{
			current = player1;
		}
		i = checkWin();

	} while (i==-1);
	if (i == 1)
		cout << "player1 (X) is the winner\n\n\n";
	else if (i == 2)
		cout << "player 2 (O) is the winner\n\n\n";
	else
		cout << "its a draw!\n\n\n";

	system("pause");

}
int checkWin(){

	if (Coords[1] == Coords[2] && Coords[2] == Coords[3] && Coords[1] == 'X')
		return 1;
	else if (Coords[4] == Coords[5] && Coords[5] == Coords[6] && Coords[4] == 'X')
		return 1;
	else if (Coords[7] == Coords[8] && Coords[8] == Coords[9] && Coords[7] == 'X')
		return 1;
	else if (Coords[1] == Coords[4] && Coords[4] == Coords[7] && Coords[1] == 'X')
		return 1;
	else if (Coords[2] == Coords[5] && Coords[5] == Coords[8] && Coords[2] == 'X')
		return 1;
	else if (Coords[3] == Coords[6] && Coords[6] == Coords[9] && Coords[3] == 'X')
		return 1;
	else if (Coords[1] == Coords[5] && Coords[5] == Coords[9] && Coords[1] == 'X')
		return 1;
	else if (Coords[3] == Coords[5] && Coords[5] == Coords[7] && Coords[3] == 'X')
		return 1;
	else if (Coords[1] == Coords[2] && Coords[2] == Coords[3] && Coords[1] == 'O')
		return 2;
	else if (Coords[4] == Coords[5] && Coords[5] == Coords[6] && Coords[4] == 'O')
		return 2;
	else if (Coords[7] == Coords[8] && Coords[8] == Coords[9] && Coords[7] == 'O')
		return 2;
	else if (Coords[1] == Coords[4] && Coords[4] == Coords[7] && Coords[1] == 'O')
		return 2;
	else if (Coords[2] == Coords[5] && Coords[5] == Coords[8] && Coords[2] == 'O')
		return 2;
	else if (Coords[3] == Coords[6] && Coords[6] == Coords[9] && Coords[3] == 'O')
		return 2;
	else if (Coords[1] == Coords[5] && Coords[5] == Coords[9] && Coords[1] == 'O')
		return 2;
	else if (Coords[3] == Coords[5] && Coords[5] == Coords[7] && Coords[3] == 'O')
		return 2;
	else if (Coords[1] != '1' && Coords[2] != '2' && Coords[3] != '3'
		&& Coords[4] != '4' && Coords[5] != '5' && Coords[6] != '6'
		&& Coords[7] != '7' && Coords[8] != '8' && Coords[9] != '9')
		return 0;
	else
		return -1;

}
void board()
{
	system("cls"); 
	cout << "\n\nTic Tac Toe\n\n";
	cout << "player 1 (X) - player 2 (0)" << endl << endl;
	cout << endl; 

	cout << "     |     |     " << endl;
	cout << "  " << Coords[1] << "  |  " << Coords[2] << "  |  " << Coords[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << Coords[4] << "  |  " << Coords[5] << "  |  " << Coords[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << Coords[7] << "  |  " << Coords[8] << "  |  " << Coords[9] << endl;
	cout << "     |     |     " << endl << endl;


}