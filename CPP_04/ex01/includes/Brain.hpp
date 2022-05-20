#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
public:
	

// ----------------------------- Constructors ------------------------------ //
	Brain();	// Default Constructor
	Brain(std::string in_ideas);	// Fields Constructor
	Brain(const Brain& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	~Brain();	// Destructor

// ------------------------------- Operators ------------------------------- //
	Brain & operator=(const Brain& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	std::string get_ideas(int index) const;
	void set_ideas(std::string input, int index);

// --------------------------------- Methods ------------------------------- //

private:
	std::string ideas[100];

};

# ifndef NO_DEBUG

#  ifndef _ARG
#   define _ARG(arg) #arg << "(" << arg << ") "
#  endif /* _ARG */

#  define _BRAIN_ARGS _ARG(ideas)
#  define _BRAIN_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			  << TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			  << "[\033[34;47m" << this                         \
			  << "\033[0m]\033[0m: " << _BRAIN_ARGS  \
			  << "}" << std::endl;
# else

#  define _BRAIN_AUTO(x, y) ;
#  define _BRAIN_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */

#endif /* BRAIN_HPP */
