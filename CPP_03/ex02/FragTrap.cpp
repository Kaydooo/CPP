
#include "FragTrap.hpp"

	FragTrap::FragTrap(void)
	{
		std::cout << GREEN << "FragTrap Default Constrcuter Called" << RESET << std::endl;
		name = "Default";
		hitpoints = 100;
		energypoints = 100;
		attackdamage = 30;
	}

	FragTrap::FragTrap(std::string str){

		std::cout << GREEN << "FragTrap Default Parm Constrcuter Called" << RESET << std::endl;
		name = str;
		hitpoints = 100;
		energypoints = 100;
		attackdamage = 30;
	}

	FragTrap::FragTrap(FragTrap const &src):ClapTrap(src){
	std::cout << GREEN << "FragTrap Copy Constrcuter Called" << RESET << std::endl;
	}

	FragTrap::~FragTrap(void)
	{
		std::cout << RED << "FragTrap Destrcuter Called" << RESET << std::endl;
	}

	FragTrap &FragTrap::operator=(FragTrap const &rhs)
	{
		name = rhs.name;
		hitpoints = rhs.hitpoints;
		energypoints = rhs.energypoints;
		attackdamage = rhs.attackdamage;
		std::cout << GREEN << "FragTrap Copy Assignment Constrcuter Called" << RESET << std::endl;
		return (*this);
	}

	void	FragTrap::highFivesGuys()
	{
		std::cout << name << "Gimme A HIGHHH FIVE !!!!!" << std::endl;
	}
