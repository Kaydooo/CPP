#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include "ICharacter.hpp"

class AMateria;
class Character : public ICharacter
{
public:

// ----------------------------- Constructors ------------------------------ //
	Character();	// Default Constructor
	Character(std::string name);	// Default Constructor
	Character(const Character& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	~Character();	// Destructor

// ------------------------------- Operators ------------------------------- //
	Character & operator=(const Character& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	std::string const & getName() const;

// --------------------------------- Methods ------------------------------- //
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
private:
	AMateria *inventory[4];
	AMateria *ground[100];
	int	count;
	int count_ground;
	std::string name;

};

#endif