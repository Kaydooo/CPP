#include "Ice.hpp"

// ----------------------------- Constructors ------------------------------ //
Ice::Ice()
{
	type = "ice";
	_ICE_AUTO(32, "Default Constructor");
}

Ice::Ice(const Ice& c)
{
	type = c.type;
	ICE_AUTO(32, "Copy Constructor");
}

Ice::Ice() 
{
	_ICE_AUTO(32, "Fields Constructor");
}

// ------------------------------ Destructor ------------------------------- //
Ice::~Ice()
{
	_ICE_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

Ice & Ice::operator=(const Ice& c)
{
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //

Ice*	Ice::clone() const
{
	Ice *n = new Ice();
	return n;
}