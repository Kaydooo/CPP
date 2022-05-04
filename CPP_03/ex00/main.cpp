#include "ClapTrap.hpp"

int main(void) {

    ClapTrap tank1;
	ClapTrap tank2("Tank2");

	tank1.attack("Tank3");
	tank1.takeDamage(11);
	tank1.attack("Tank3");
	tank1.beRepaired(2);
	tank1.attack("Tank3");
	tank2.beRepaired(2);
	return 0;
}