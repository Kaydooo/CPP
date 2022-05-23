#include "Ice.hpp"
#include "ICharacter.hpp"
// ----------------------------- Constructors ------------------------------ //
Ice::Ice()
{
	type = "ice";
}

Ice::Ice(const Ice& c):AMateria()
{
	
}

// ------------------------------ Destructor ------------------------------- //
Ice::~Ice()
{
}
// ------------------------------- Operators ------------------------------- //

Ice & Ice::operator=(const Ice& c)
{
	*this = c;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //

Ice*	Ice::clone() const
{
	Ice *n = new Ice();
	return n;
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at  " << target.getName() << " *" << std::endl;
}