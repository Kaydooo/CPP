#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: virtual public Animal
{
private:
	Brain *b_obj;

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

# ifndef NO_DEBUG

#  ifndef _ARG
#   define _ARG(arg) #arg << "(" << arg << ") "
#  endif /* _ARG */

#  define _DOG_ARGS _ARG(Type)
#  define _DOG_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			  << TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			  << "[\033[34;47m" << this                         \
			  << "\033[0m]\033[0m: " << _DOG_ARGS  \
			  << "}" << std::endl;
# else

#  define _DOG_AUTO(x, y) ;
#  define _DOG_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */

#endif /* DOG_HPP */
