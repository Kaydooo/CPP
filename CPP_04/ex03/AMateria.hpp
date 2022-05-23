#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"
#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"
class ICharacter;

class AMateria
{
public:

// ----------------------------- Constructors ------------------------------ //
	// AMateria();	// Default Constructor
	//AMateria(const AMateria& c);	// Copy Constructor
	AMateria(std::string const & type);
	// AMateria(const AMateria& c);
// ------------------------------ Destructor ------------------------------- //
	virtual ~AMateria() = 0;	// Destructor

// ------------------------------- Operators ------------------------------- //
//	AMateria & operator=(const AMateria& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	std::string const & getType() const; //Returns the materia type

// --------------------------------- Methods ------------------------------- //
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

protected:
	std::string type;

};

#endif