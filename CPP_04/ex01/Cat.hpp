#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: virtual public Animal
{

private:
	Brain *b_obj;
public:
	

// ----------------------------- Constructors ------------------------------ //
	Cat();	// Default Constructor
	Cat(std::string in_Type);	// Fields Constructor
	Cat(const Cat& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	~Cat();	// Destructor

// ------------------------------- Operators ------------------------------- //
	Cat & operator=(const Cat& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	

// --------------------------------- Methods ------------------------------- //
	void	makeSound()const;
};


#endif /* CAT_HPP */
