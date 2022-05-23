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

#endif /* WRONGANIMAL_HPP */
