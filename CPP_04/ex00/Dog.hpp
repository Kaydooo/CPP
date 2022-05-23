#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
#include "Animal.hpp"

class Dog: virtual public Animal
{
public:
	

// ----------------------------- Constructors ------------------------------ //
	Dog();	// Default Constructor
	Dog(std::string in_Type);	// Fields Constructor
	Dog(const Dog& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	~Dog();	// Destructor

// ------------------------------- Operators ------------------------------- //
	Dog & operator=(const Dog& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	

// --------------------------------- Methods ------------------------------- //
	void	makeSound()const;
};

#endif /* DOG_HPP */
