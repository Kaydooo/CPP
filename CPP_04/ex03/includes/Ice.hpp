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
private:
	

};

# ifndef NO_DEBUG

#  ifndef _ARG
#   define _ARG(arg) #arg << "(" << arg << ") "
#  endif /* _ARG */

#  define _ICE_ARGS 
#  define _ICE_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			  << TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			  << "[\033[34;47m" << this                         \
			  << "\033[0m]\033[0m: " << _ICE_ARGS  \
			  << "}" << std::endl;
# else

#  define _ICE_AUTO(x, y) ;
#  define _ICE_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */

#endif /* ICE_HPP */
