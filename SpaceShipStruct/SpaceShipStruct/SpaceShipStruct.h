#include <string>

using namespace std; 

struct SpaceShip
{
	int y_cord, x_cord; 
	int weapon_power;

};
SpaceShip getNewSpaceShip()
{
	SpaceShip ship; 
	ship.x_cord = 0; 
	ship.y_cord = 0; 
	ship.weapon_power = 20; 
	return ship; 
}
SpaceShip updateXPos(SpaceShip ship)
{
	ship.x_cord += 10;
	return ship; 
}
SpaceShip updateYPos(SpaceShip ship)
{
	ship.y_cord += 10;
	return ship; 
}
