#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: virtual public WrongAnimal
{
public:

// ----------------------------- Constructors ------------------------------ //
	WrongCat();	// Default Constructor
	WrongCat(std::string in_Type);	// Fields Constructor
	WrongCat(const WrongCat& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	~WrongCat();	// Destructor

// ------------------------------- Operators ------------------------------- //
	WrongCat & operator=(const WrongCat& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	

// --------------------------------- Methods ------------------------------- //
	void	makeSound()const;
};

#endif /* WRONGCAT_HPP */
