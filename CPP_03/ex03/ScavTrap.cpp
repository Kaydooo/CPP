
#include "ScavTrap.hpp"

	ScavTrap::ScavTrap(void):ClapTrap("Default Scav", 100, 50, 30)
	{
		std::cout << "ScavTrap Default Constrcuter Called _ SS" << std::endl;
	}

	ScavTrap::ScavTrap(std::string str){

		std::cout << "ScavTrap Constrcuter Called __ SS" << std::endl;

		name = str;
		hitpoints = 100;
		energypoints = 50;
		attackdamage = 20;
	}

	ScavTrap::~ScavTrap(void)
	{
		std::cout << "ScavTrap Destructor Called _ SS" << std::endl;

	}

	void	ScavTrap::guardGate()
	{
		std::cout << name << "is in Guard mode !" << std::endl;
	}
