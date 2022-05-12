#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {

    ClapTrap	trap1;
	ClapTrap	trap2("Cat");
	
	trap1.takeDamage(3);
	trap1.attack("Dog");
	trap1.beRepaired(5);
	trap1.attack("Dog");
	trap2.takeDamage(20);
	trap2.attack("Dog");
	trap2.beRepaired(5);
	trap2.attack("Dog");



	std::cout << std::endl << std::endl << std::endl;
	ScavTrap	trap3;
	ScavTrap	trap4("Alex");
	trap4.attack("Dan");
	trap4.takeDamage(3);
	trap3.beRepaired(2);
	trap4.guardGate();

	std::cout << std::endl;
	FragTrap	trap5;
	FragTrap	trap6("Dasha");
	trap6.attack("Igor");
	trap6.takeDamage(3);
	trap5.beRepaired(2);
	trap6.highFivesGuys();
	return 0;
}
