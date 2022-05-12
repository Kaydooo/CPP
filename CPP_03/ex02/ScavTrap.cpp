
#include "ScavTrap.hpp"

	ScavTrap::ScavTrap(void)
	{
		std::cout << GREEN << "ScavTrap Default Constrcuter Called" << RESET << std::endl;
		name = "Default";
		hitpoints = 100;
		energypoints = 50;
		attackdamage = 20;
	}

	ScavTrap::ScavTrap(std::string str){

		std::cout << GREEN << "ScavTrap Default Constrcuter Called" << RESET << std::endl;
		name = str;
		hitpoints = 100;
		energypoints = 50;
		attackdamage = 20;
	}

	ScavTrap::~ScavTrap(void)
	{
		std::cout << RED << "ScavTrap Destrcuter Called" << RESET << std::endl;
	}

	ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
	{
		name = rhs.name;
		hitpoints = rhs.hitpoints;
		energypoints = rhs.energypoints;
		attackdamage = rhs.attackdamage;
		std::cout << GREEN << "ScavTrap Copy Assignment Constrcuter Called" << RESET << std::endl;
		return (*this);
	}

	void	ScavTrap::guardGate()
	{
		std::cout << name << "is in Guard mode !" << std::endl;
	}
