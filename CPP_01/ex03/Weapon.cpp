#include "Weapon.hpp"

	Weapon::Weapon(std::string weaponType) : _type(weaponType)
	{
	}
	Weapon::Weapon()
	{

	}
	Weapon::~Weapon(void)
	{
	}

	const std::string &Weapon::getType()
	{
		return this->_type;
	}

	void	Weapon::setType(std::string newType)
	{
		this->_type = newType;
	}