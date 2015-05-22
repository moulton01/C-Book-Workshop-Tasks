#include <iostream>

using namespace std; 

int main(){

	for (int x = 0; x < 100; x++)
	{
		int tempThree = x % 3;
		int tempFive = x % 5; 
		//cout << tempThree << "  " << tempFive << endl; 
		if (tempThree == 0)
		{
			cout << "fizz" <<endl;
		}
		else if (tempFive == 0)
		{
			cout << "buzz" << endl;
		}
		else
			cout << x << endl;
	}
	system("pause");
}