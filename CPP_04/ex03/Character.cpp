#include "Character.hpp"

// ----------------------------- Constructors ------------------------------ //
Character::Character(): count(0), count_ground(0)
{
	std::cout << GREEN << "Character() Default Constructor Called" << RESET << std::endl;

}

Character::Character(const Character& c) 
{
	*this = c;
}

Character::Character(std::string name) 
{
	this->name = name;
}

// ------------------------------ Destructor ------------------------------- //
Character::~Character()
{

}
// ------------------------------- Operators ------------------------------- //

Character & Character::operator=(const Character& c)
{
	*this = c;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //
std::string const & Character::getName() const
{
	return (name);
}

// --------------------------------- Methods ------------------------------- //

void Character::equip(AMateria* m)
{

		for(int i = 0; i < 4 ; i++)
		{
			if(!inventory[i])
			{
				inventory[i] = m;
				return ;
			}
		}
		std::cout << "Inventory Full !" << std::endl;
	
}
void Character::unequip(int idx)
{
	if(idx >= 4)
		std::cout << "Wrong Index" << std::endl;
	else if(inventory[idx])
	{
		ground[count_ground] = inventory[idx];
		count_ground++;
		inventory[idx] = NULL;
	}
}
void Character::use(int idx, ICharacter& target)
{
	if(inventory[idx])
	{
		inventory[idx]->use(target);
	}
}