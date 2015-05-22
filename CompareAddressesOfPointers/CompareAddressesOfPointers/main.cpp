#include <iostream>
#include <string>

using namespace std; 

int main(){

	int test1 = 10, test2 = 20; 
	int *p_test1 = &test1; 
	int *p_test2 = &test2; 

	if (p_test1 > p_test2)
	{
		cout <<"1"<< p_test1 << endl;
		cout <<"2"<< p_test2 << endl;
	}
	else
	{
		cout << "1" << p_test2 << endl;
		cout << "2" << p_test1 << endl;
	}


	system("pause");



}