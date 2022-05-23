#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

class Animal
{
public:
	

// ----------------------------- Constructors ------------------------------ //
	Animal();	// Default Constructor
	Animal(std::string in_Type);	// Fields Constructor
	Animal(const Animal& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	virtual ~Animal() = 0;	// Destructor

// ------------------------------- Operators ------------------------------- //
	Animal & operator=(const Animal& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	std::string get_Type() const;
	void set_Type(std::string input);
	

// --------------------------------- Methods ------------------------------- //

	virtual void	makeSound() const;
protected:
	std::string Type;

};
#endif /* ANIMAL_HPP */
