#ifndef TYPECASTER_HPP
# define TYPECASTER_HPP

# include <iostream>
# include <cstdlib>
# include <climits>
# include <iomanip>


#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"
#define I_C	1
#define I_I	2
#define I_F	3
#define I_D	4


class TypeCaster
{
public:
	
// ----------------------------- Constructors ------------------------------ //
	TypeCaster(std::string);	// Fields Constructor
	TypeCaster(const TypeCaster&);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	virtual ~TypeCaster();	// Destructor

// ------------------------------- Operators ------------------------------- //
	TypeCaster & operator=(const TypeCaster&); // Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	
// --------------------------------- Methods ------------------------------- //
	void	printNumbers();


private:
	TypeCaster();	// Default Constructor
	void	setType();
	void	printC();
	void	printI();
	void	printF();
	void	printD();
	std::string input;
	int			type;

};

#endif /* TYPECASTER_HPP */
