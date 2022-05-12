#include "ScavTrap.hpp"


int main(void) {

    ClapTrap	trap1;
	ClapTrap	trap2("Cat");

	trap1.attack("Dog");
	trap1.takeDamage(3);
	trap2.beRepaired(2);
	std::cout << std::endl;
	ScavTrap	trap3;
	ScavTrap	trap4("Alex");

	trap4.attack("Dan");
	trap4.takeDamage(3);
	trap4.attack("Dan");
	trap3.beRepaired(2);
	trap3.attack("Dan");
	trap3 = trap4;
	trap3.attack("Dan");

	

	trap4.guardGate();
	return 0;
}
