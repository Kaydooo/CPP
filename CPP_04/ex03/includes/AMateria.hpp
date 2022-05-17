#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class AMateria
{
public:
	

// ----------------------------- Constructors ------------------------------ //
	AMateria();	// Default Constructor
	AMateria(std::string const & type);	// Fields Constructor
	AMateria(const AMateria& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	virtual ~AMateria();	// Destructor

// ------------------------------- Operators ------------------------------- //
	AMateria & operator=(const AMateria& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	

// --------------------------------- Methods ------------------------------- //

private:
	

};

# ifndef NO_DEBUG

#  ifndef _ARG
#   define _ARG(arg) #arg << "(" << arg << ") "
#  endif /* _ARG */

#  define _AMATERIA_ARGS 
#  define _AMATERIA_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			  << TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			  << "[\033[34;47m" << this                         \
			  << "\033[0m]\033[0m: " << _AMATERIA_ARGS  \
			  << "}" << std::endl;
# else

#  define _AMATERIA_AUTO(x, y) ;
#  define _AMATERIA_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */

#endif /* AMATERIA_HPP */
