#include "DiamondTrap.hpp"

int main(void) 
{
	ClapTrap DefaultTank;
	DefaultTank.attack("Dummy Tank");
	DefaultTank.takeDamage(30);
	DefaultTank.beRepaired(10);
	DefaultTank.attack("Dummy Tank");


	DiamondTrap D_Tank("D_Tank");
	D_Tank.print_status();
	D_Tank.attack("Dummy Tank 2");
	D_Tank.takeDamage(9);
	D_Tank.beRepaired(10);
	D_Tank.attack("Dummy Tank 2");
	D_Tank.takeDamage(102);
	D_Tank.takeDamage(10);
	D_Tank.attack("Dummy Tank 2");
	D_Tank.highFivesGuys();
	D_Tank.whoAmI();


	DiamondTrap D_Tank_dup(D_Tank);
	D_Tank_dup.attack("Dummmmyyyyyyy");
	return 0;
}
