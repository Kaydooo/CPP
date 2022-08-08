#include "Zombie.hpp"

int main()
{
	randomChump("Zombie1");
	Zombie *nZombie = newZombie("Zombie2");
	nZombie->announce();
	delete nZombie;

	return (0);
}