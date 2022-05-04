
#include "FragTrap.hpp"

	FragTrap::FragTrap(void)
	{
		std::cout << "Default Constrcuter Called _ FF" << std::endl;

		name = "Default";
		hitpoints = 100;
		energypoints = 100;
		attackdamage = 30;
	}

	FragTrap::FragTrap(std::string str){

		std::cout << "Constrcuter Called __ FF" << std::endl;

		name = str;
		hitpoints = 100;
		energypoints = 100;
		attackdamage = 30;
	}

	FragTrap::~FragTrap(void)
	{
		std::cout << "Destructor Called _ FF" << std::endl;

	}

	void	FragTrap::highFivesGuys()
	{
		std::cout << name << "Gimme A HIGHHH FIVE !!!!!" << std::endl;
	}
