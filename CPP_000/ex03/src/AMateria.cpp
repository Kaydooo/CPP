#include "AMateria.hpp"

// ----------------------------- Constructors ------------------------------ //
AMateria::AMateria()
{
	_AMATERIA_AUTO(32, "Default Constructor");
}

AMateria::AMateria(const AMateria& c)
{
	_AMATERIA_AUTO(32, "Copy Constructor");
	
}

AMateria::AMateria() 
{
	_AMATERIA_AUTO(32, "Fields Constructor");
}

// ------------------------------ Destructor ------------------------------- //
AMateria::~AMateria()
{
	_AMATERIA_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

AMateria & AMateria::operator=(const AMateria& c)
{
	
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //

