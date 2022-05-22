#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice: public AMateria
{
public:

// ----------------------------- Constructors ------------------------------ //
	Ice();	// Default Constructor
	Ice(const Ice& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	~Ice();	// Destructor

// ------------------------------- Operators ------------------------------- //
	Ice & operator=(const Ice& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	

// --------------------------------- Methods ------------------------------- //
	Ice* clone() const;
	void use(ICharacter& target);
	

};

#endif /* ICE_HPP */
