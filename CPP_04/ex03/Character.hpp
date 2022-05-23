#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

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
	AMateria const		*getInv(int idx) const;
	AMateria const		*getGnd(int idx) const;

// --------------------------------- Methods ------------------------------- //
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
private:
	AMateria *inventory[4];
	AMateria *ground[1000];
	int count_ground;
	std::string name;

};

#endif