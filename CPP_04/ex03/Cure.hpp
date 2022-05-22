#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure: public AMateria
{
public:
	

// ----------------------------- Constructors ------------------------------ //
	Cure();	// Default Constructor
	Cure(const Cure& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	~Cure();	// Destructor

// ------------------------------- Operators ------------------------------- //
	Cure & operator=(const Cure& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	

// --------------------------------- Methods ------------------------------- //
	Cure* clone() const;
	void use(ICharacter& target);


};

#endif /* CURE_HPP */
