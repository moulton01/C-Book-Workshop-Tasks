#include <iostream>
#include <string>
#include "SpaceShipStruct.h"
using namespace std; 


int main(){
	SpaceShip myShips[5];
	bool offScreen = false; 
	int screenX = 1024; 
	int screenY = 768; 

	//instantiates 5 new Space ship structs. 
	for (int i = 0; i < 5; i++)
	{
		myShips[i] = getNewSpaceShip();
	}

	//updates every ship in myShips x_cord until theyre offscreen. 
	do{
	
		for (int i = 0; i < 5; i++)
		{
			myShips[i] = updateXPos(myShips[i]);
			cout << "{" << myShips[i].x_cord << "}" << endl;
			if (myShips[i].x_cord > screenX)
			{
				offScreen = true; 
			}
		}
		
	
	}while (!offScreen);

	system("pause");

}