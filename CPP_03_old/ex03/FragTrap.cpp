
#include "FragTrap.hpp"

	FragTrap::FragTrap(void) : ClapTrap("Default Frag", 100, 100, 30)
	{
		std::cout << "Frag Trap Default Constrcuter Called _ FF" << std::endl;
	}

	FragTrap::FragTrap(std::string str){

		std::cout << "Frag Trap Constrcuter Called __ FF" << std::endl;

		name = str;
		hitpoints = 100;
		energypoints = 100;
		attackdamage = 30;
	}

	FragTrap::~FragTrap(void)
	{
		std::cout << "Frag Trap Destructor Called _ FF" << std::endl;

	}

	void	FragTrap::highFivesGuys()
	{
		std::cout << name << "Frag Trap Gimme A HIGHHH FIVE !!!!!" << std::endl;
	}
