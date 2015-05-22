#include <iostream>
#include <string>

using namespace std;

bool checkPass(string password);

int main(){

	string password;
	int i = 0;

	while (i <= 10)
	{
		cout << "enter your password please..\n";
		cin >> password;


		i++;
		if (i == 10)
		{
			cout << "you have entered the wrong password to many times\n2" << endl;
			break;
		}
		if (checkPass(password))
		{
			cout << "you have entered the right password, Welcome!\n";
			break;
		}

	}
	system("pause");

}
bool checkPass(string password)
{
	if (password == "hello")
	{
		return true;
	}
	return false;
}