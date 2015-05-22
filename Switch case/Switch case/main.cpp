#include <iostream>
#include <string>


using namespace std;


int main(){

	int input = 0; 
	cout << "please enter number 1 to hear 12 days of christmas";
	cin >> input;

	switch (input)
	{
	case 1:
		cout << "On the first day of christmas,\nMy true love sent to me \nA partridge in a pear tree";
	case 2:
		cout << "On the second day of christmas,\nMy true love sent to me \nTwo turtle doves \nAnd a partridge in a pear tree";
	case 3: 
		cout << "On the third day of Christmas,\nmy true love sent to me\nThree French hens,\nTwo turtle doves,\n And a partridge in a pear tree. ";
	case 4: 
		cout << "On the forth day of Christmas,\nmy true love sent to me\nFour calling birds,\nThree French hens,\n Two turtle doves,\n And a partridge in a pear tree.";
	case 5:
		cout << "On the fifth day of Christmas,\nmy true love sent to me\nFive golden rings,\nFour calling birds,\n Three French hens,\n Two turtle doves,\n And a partridge in a pear tree.";
	case 6:
		cout << "On the sixth day of Christmas,\n my true love sent to me\n Four calling birds,\n Three French hens,\n Two turtle doves,\n And a partridge in a pear tree.";

	}
	system("pause");




}