#include "Ice.hpp"

// ----------------------------- Constructors ------------------------------ //
Ice::Ice():AMateria("ice")
{
	type = "ice";
	std::cout << GREEN << "Ice() Constructor Called" << RESET << std::endl;
}

Ice::Ice(const Ice& c):AMateria("ice")
{
	*this = c;
	std::cout << GREEN << "Ice() Copy Constructor Called" << RESET << std::endl;
}

// ------------------------------ Destructor ------------------------------- //
Ice::~Ice()
{
	std::cout << RED << "Ice() Destructor Called" << RESET << std::endl;
}
// ------------------------------- Operators ------------------------------- //

Ice & Ice::operator=(const Ice& c)
{
	type = c.getType();
	std::cout << GREEN << "Ice() Copy Assignment Operator Called" << RESET << std::endl;
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