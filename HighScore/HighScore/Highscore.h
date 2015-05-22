#include <iostream>
#include <string>
#include <vector>

using namespace std; 


//Struct holding all the variables to keep track of a players Name, Highscore and ID to identify each player. 
struct HighScore{

	string name; 
	vector <int> highScore; 
	int ID; 

};
//Function to add a new entry. 
HighScore AddNewEntry(vector <HighScore> &AllUserScore, int ID)
{
	HighScore newHighScore, temp; 
	int highscore; 
	//Asks for input from the user, then sets it to the HighScore object newHighScore. 
	cout << "\nPlease enter your name.\n";
	cin >> newHighScore.name; 

	cout << "\nPlease enter you highscore.\n";
	cin >> highscore; 

	//Setting the input to the object. 
	newHighScore.highScore.push_back(highscore);
	newHighScore.ID = ID;
	//Returns the object to be added to the vector. 
	return newHighScore; 
}
//Display all users function. 
void DisplayAll(vector <HighScore> &AllUserScore)
{
	cout << "The list contains:\n";
	//for loop iterates though AllUserScore vector and displays the name and ID for each. 
	for (int i = 0; i < AllUserScore.size(); i++)
	{
		cout << "\nName: " << AllUserScore[i].name
			<< "	ID: " << AllUserScore[i].ID;
	}
}
//Displays high scores for a single user. 
void DisplayAllUserHighScores(vector <HighScore> &AllUserScore, int index){

	//Iterates throught the struct at location INDEX in the AllUserScore vector and displays the highscores. 
	for (int i = 0; i < AllUserScore[index].highScore.size(); i++)
	{
		cout << "Score[" <<i<< "]: " << AllUserScore[index].highScore[i] << endl;
	}

}
//Function to display high scores for all users. 
void DisplayHighScoresAllUsers(vector <HighScore> &AllUserScore)
{
	//double for loop. First iterating through the AllUserScore Vector 
	//Then for each object in the Vector it iterates through they're personal highScore vector and displays each one. 
	for (int i = 0; i < AllUserScore.size(); i++)
	{
		cout << "The list of scores for " << AllUserScore[i].name << ":\n";
		for (int j = 0; j < AllUserScore[i].highScore.size(); j++)
		{
			cout << "Score[" << j << "]: " << AllUserScore[i].highScore[j] << endl;
		}
	}

}
//Function to Add a new high score. 
void AddNewHighScore(vector <HighScore> &AllUserScore)
{
	int input, newHighScore;
	//gathers the ID for the user they want to add a new highscore to. 
	cout << "Please enter the ID for player you wish to add a highscore too.\n";
	cin >> input;
	//Asks for the value of the new high score. 
	cout << "Please enter the new highscore for this player.\n";
	cin >> newHighScore;
	//accesses the object within the AllUserScore Vector at location Input(ID) 
	//and then uses the push back function on the highScores vector to add the new highscore. 
	AllUserScore[input].highScore.push_back(newHighScore);
	//then calls the DisplayAllUserHighScores explained earlier to display the high scores for that user. 
	DisplayAllUserHighScores(AllUserScore, input);
}



