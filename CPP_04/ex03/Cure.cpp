#include "Cure.hpp"
#include "ICharacter.hpp"
// ----------------------------- Constructors ------------------------------ //
Cure::Cure()
{
	type = "cure";

}

Cure::Cure(const Cure& c):AMateria()
{
	*this = c;

}

// ------------------------------ Destructor ------------------------------- //
Cure::~Cure()
{

}
// ------------------------------- Operators ------------------------------- //

Cure & Cure::operator=(const Cure& c)
{
	*this = c;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //

Cure*	Cure::clone() const
{
	Cure *n = new Cure();
	return n;
}
void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}