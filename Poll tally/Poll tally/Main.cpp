#include <iostream>
#include <string>

using namespace std;

int main(){

	int poll1 = 0;
	int poll2 = 0;
	int poll3 = 0;

	string userQuestion;
	string answer1;
	string answer2;
	string answer3;

	int answer = 0;

	cout << "please enter your question\n";
	getline(cin, userQuestion);

	cout << "please enter your three awnsers\n";
	getline(cin, answer1);
	getline(cin, answer2);
	getline(cin, answer3);


	cout << endl<< endl << userQuestion << "\n....Please enter the corresponding numbers to choose your poll awnser\n\n";

	cout << "(1)" << answer1 << endl;
	cout << "(2)" << answer2 << endl;
	cout << "(3)" << answer3 << endl;
	

	do {

		cin >> answer;

		if (answer == 1)
		{
			poll1++;
		}
		else if (answer == 2)
		{
			poll2++;
		}
		else if (answer == 3)
		{
			poll3++;
		}
		else if (answer != 0 || answer != 1 || answer != 2 || answer != 3 )
		{
			cout << "that is an invalid answer\n";
		}
			

	} while (answer != 0);
	cout << "BAR CHART:\n";
	for (int i = 0; i <= poll1; i++)
	{
		cout << "I";
	}
	cout << "\n";
	for (int i = 0; i <= poll2; i++)
	{
		cout << "I";
	}
	cout << "\n";
	for (int i = 0; i <= poll3; i++)
	{
		cout << "I";
	}
	cout <<endl << endl << poll1 << " people choose option 1" << endl;
	cout << poll2 << " people choose option 2" << endl;
	cout << poll3 << " people choose option 3" << endl;

	system("pause");

}