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
private:
	

};

# ifndef NO_DEBUG

#  ifndef _ARG
#   define _ARG(arg) #arg << "(" << arg << ") "
#  endif /* _ARG */

#  define _CURE_ARGS 
#  define _CURE_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			  << TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			  << "[\033[34;47m" << this                         \
			  << "\033[0m]\033[0m: " << _CURE_ARGS  \
			  << "}" << std::endl;
# else

#  define _CURE_AUTO(x, y) ;
#  define _CURE_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */

#endif /* CURE_HPP */
