#include <iostream>
#include <string>
#include <vector>
#include "Highscore.h"
using namespace std; 
int ID = 0; 

int main(){

	int input, index;					//Inputs used throughout the program. 
	string yesNo; 
	vector <HighScore> AllUserScore;	//List of all users and theyre high scores. 
	bool exit = false;					//Bool to decide when to exit the loop. 

	//Do while loop to repeat the menu. 
	do {
		//Functions the program provides. 
		cout << "\n1. Add a new entry\n2.Add new Highscore to Current User.\n3. All Scores from All Users\n4. List of All Users.\n5. EXIT.";
		cin >> input;

		switch (input)
		{
		case 1:
			//Calls the Add new entry function on the push_back function of the AllUserScore Vector to add a new entry to the vector. 
			AllUserScore.push_back(AddNewEntry(AllUserScore, ID));
			//increments ID, used to set the ID variable in the HighScore Struct. 
			ID++; 
			//Displays the details of the new entry to the user. 
			cout << "The details for your Entry are:\n"
				<< "Name: " << AllUserScore[ID-1].name
				<< "\nID: " << ID-1 << endl; 
			break;
		case 2:
			//Adds a new highscore to an already saved user in the vector. 
			AddNewHighScore(AllUserScore);
			break;
		case 3:
			//Displays the high scores for all the users saved in the vector AllUserScore. 
			DisplayHighScoresAllUsers(AllUserScore);
			break;
		case 4:
			//Display All Users. 
			DisplayAll(AllUserScore);
			cout << "\nWould you like to see the full list of highscores for a user? (Yes or No)\n";
			cin >> yesNo;
			if (yesNo == "yes" || yesNo == "Yes")
			{
				cout << "\nplease enter the ID for the user, whos highscores you wish to see.\n";
				cin >> index;
				DisplayAllUserHighScores(AllUserScore, index);
			}
			else
				break;
		case 5:
			//Sets exit bool to true, and exiting the do while loop. 
			exit = true;
			break;

		}
	} while (!exit);

	system("pause");

}