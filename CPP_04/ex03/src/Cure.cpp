#include "Cure.hpp"

// ----------------------------- Constructors ------------------------------ //
Cure::Cure()
{
	type = "cure";
	_CURE_AUTO(32, "Default Constructor");
}

Cure::Cure(const Cure& c)
{
	_CURE_AUTO(32, "Copy Constructor");
	
}

// ------------------------------ Destructor ------------------------------- //
Cure::~Cure()
{
	_CURE_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

Cure & Cure::operator=(const Cure& c)
{
	
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //

Cure*	Cure::clone() const
{
	Cure *n = new Cure();
	return n;
}