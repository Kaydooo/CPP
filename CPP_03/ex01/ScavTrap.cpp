
#include "ScavTrap.hpp"

	ScavTrap::ScavTrap(void)
	{
		std::cout << "Default Constrcuter Called _ SS" << std::endl;

		name = "Default";
		hitpoints = 100;
		energypoints = 50;
		attackdamage = 20;
	}

	ScavTrap::ScavTrap(std::string str){

		std::cout << "Constrcuter Called __ SS" << std::endl;

		name = str;
		hitpoints = 100;
		energypoints = 50;
		attackdamage = 20;
	}

	ScavTrap::~ScavTrap(void)
	{
		std::cout << "Destructor Called _ SS" << std::endl;

	}

	void	ScavTrap::guardGate()
	{
		std::cout << name << "is in Guard mode !" << std::endl;
	}
