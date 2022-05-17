#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
public:
	

// ----------------------------- Constructors ------------------------------ //
	WrongAnimal();	// Default Constructor
	WrongAnimal(std::string in_Type);	// Fields Constructor
	WrongAnimal(const WrongAnimal& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	~WrongAnimal();	// Destructor

// ------------------------------- Operators ------------------------------- //
	WrongAnimal & operator=(const WrongAnimal& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	std::string get_Type() const;
	void set_Type(std::string input);
	

// --------------------------------- Methods ------------------------------- //

	void	makeSound() const;
protected:
	std::string Type;

};

# ifndef NO_DEBUG

#  ifndef _ARG
#   define _ARG(arg) #arg << "(" << arg << ") "
#  endif /* _ARG */

#  define _WRONGANIMAL_ARGS _ARG(Type)
#  define _WRONGANIMAL_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			  << TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			  << "[\033[34;47m" << this                         \
			  << "\033[0m]\033[0m: " << _WRONGANIMAL_ARGS  \
			  << "}" << std::endl;
# else

#  define _WRONGANIMAL_AUTO(x, y) ;
#  define _WRONGANIMAL_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */

#endif /* WRONGANIMAL_HPP */
