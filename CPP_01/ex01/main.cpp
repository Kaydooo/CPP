#include "Zombie.hpp"

int main()
{
	Zombie *zHorde = zombieHorde(10000000, "NoName");
	for(int i = 0; i<10; i++)
	{
		zHorde[i].announce();
	}
	delete [] zHorde;

	return (0);
}