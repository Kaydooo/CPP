#include "AMateria.hpp"
#include "ICharacter.hpp"

// ----------------------------- Constructors ------------------------------ //
AMateria::AMateria()
{
	type = "No Type";
}

AMateria::AMateria(const AMateria& c)
{
	type = c.getType();
}

// ------------------------------ Destructor ------------------------------- //
AMateria::~AMateria()
{
}
// ------------------------------- Operators ------------------------------- //

AMateria & AMateria::operator=(const AMateria& c)
{
	type = c.getType();
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //

std::string const & AMateria::getType() const
{
	return (type);
}

// --------------------------------- Methods ------------------------------- //

void	AMateria::use(ICharacter& target)
{
	// std::cout << "* Default use on  " << target.getName() << " *" << std::endl;
	std::cout << "* use " << " for " << target.getName() << " *" << std::endl;
}