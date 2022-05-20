#include "AMateria.hpp"

// ----------------------------- Constructors ------------------------------ //
AMateria::AMateria()
{
	type = "No Type";
	_AMATERIA_AUTO(32, "Default Constructor");
}

AMateria::AMateria(const AMateria& c)
{
	type = c.type;
	_AMATERIA_AUTO(32, "Copy Constructor");
	
}

std::string const & AMateria::getType() const
{
	return (type);
}
// ------------------------------ Destructor ------------------------------- //
AMateria::~AMateria()
{
	_AMATERIA_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

AMateria & AMateria::operator=(const AMateria& c)
{
	type = c.type;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //

