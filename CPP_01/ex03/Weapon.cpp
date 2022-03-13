#include "Weapon.hpp"

	Weapon::Weapon(void)
	{
		std::cout << "Weapon Created !" << std::endl;
	}

	Weapon::~Weapon(void)
	{
	std::cout << "Weapon Destroyed !" << std::endl;

	}

	const std::string &Weapon::getType()
	{
		return this->type;
	}

	void	Weapon::setType(std::string newType)
	{
		this->type = newType;
	}