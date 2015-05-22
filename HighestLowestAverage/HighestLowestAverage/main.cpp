#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std; 

int highestValue(int array[], int size)
{
	int highestValue = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > highestValue )
		{
			highestValue = array[i];
		}
	}
	return highestValue;

}
int lowestValue(int array[], int size)
{
	int lowestValue = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] < lowestValue)
		{
			lowestValue = array[i];
		}
	}
	return lowestValue; 

}
int averageOfArray(int array[], int size)
{
	int counter = 0; 
	int sum = 0; 
	for (int i = 0; i < size; i++)
	{
		sum += array[i];
		counter++; 
	}
	cout << "\n\nThe Sum of the array is: " << sum << endl; 
	return sum / counter; 
}

int main(){

	int array[50];
	srand(time(NULL));


	for (int i = 0; i < 10; i++)
	{
		array[i] = rand() % 100; 
		cout << array[i] << " , ";
	}

	cout << "\n\nThe Highest Number in the array is: " << highestValue(array, 10) << endl; 
	cout << "\n\nThe Lowest Number in the array is: " << lowestValue(array, 10) << endl; 
	cout << "\n\nThe Average of the array is: " << averageOfArray(array, 10) << endl; 

	system("pause");

}