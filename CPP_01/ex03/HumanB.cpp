#include "HumanB.hpp"
#include <stdio.h>

HumanB::HumanB(std::string name): _name(name)
{
	printf("org %p\n", _weapon);
}
HumanB::~HumanB(void){}

void	HumanB::attack()
{
	std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	printf("org %p \n2nd %p \n", _weapon, &weapon);
	_weapon = &weapon;
	printf("org %p \n2nd %p \n", _weapon, &weapon);
}