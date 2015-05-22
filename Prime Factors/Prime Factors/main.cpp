#include <iostream>
#include <string>

using namespace std; 

int isPrime(int number);


int sum = 0;

int main(){

	//int number = 175; 

	for (int i = 2; i < 1000; i++)
	{
		cout << isPrime(i)<< endl;

	}
	//isPrime(number);
	
	system("pause");
}
int isPrime(int number)
{
	int sum = 0;
	int temp = 0;
	for (int i = 2; i < number; i++){

		if (number % i == 0)
		{
			int count = 0;
			while (number % i == 0)
			{
				number = number / i;
				count++;
				
			}
			//cout << i << " " << count << endl;
		
			sum += i * count ;
		}
		
	}
	return sum;
}
