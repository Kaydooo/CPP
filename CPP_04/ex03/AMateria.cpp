#include "AMateria.hpp"
#include "ICharacter.hpp"

// ----------------------------- Constructors ------------------------------ //
AMateria::AMateria()
{
	type = "No Type";
}

AMateria::AMateria(const AMateria& c)
{
	*this = c;
	
}

std::string const & AMateria::getType() const
{
	return (type);
}
// ------------------------------ Destructor ------------------------------- //
AMateria::~AMateria()
{

}
// ------------------------------- Operators ------------------------------- //

AMateria & AMateria::operator=(const AMateria& c)
{
	type = c.type;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //

void	AMateria::use(ICharacter& target)
{
	// std::cout << "* Default use on  " << target.getName() << " *" << std::endl;
	std::cout << "* use " << " for " << target.getName() << " *" << std::endl;
}