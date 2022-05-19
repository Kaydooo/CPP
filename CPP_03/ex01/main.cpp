#include "ScavTrap.hpp"


int main(void) 
{
	ClapTrap DefaultTank;
	DefaultTank.attack("Dummy Tank");
	DefaultTank.takeDamage(30);
	DefaultTank.beRepaired(10);
	DefaultTank.attack("Dummy Tank");
	ScavTrap Tank2("Tank2");
	Tank2.attack("Dummy Tank 2");
	Tank2.takeDamage(9);
	Tank2.beRepaired(10);
	Tank2.attack("Dummy Tank 2");
	Tank2.takeDamage(102);
	Tank2.takeDamage(10);
	Tank2.attack("Dummy Tank 2");
	Tank2.guardGate();
	return 0;
}
