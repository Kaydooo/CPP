#include "Dog.hpp"

// ----------------------------- Constructors ------------------------------ //
Dog::Dog()
{
	Type = "Dog";
	std::cout << GREEN << "Default Constructor Called Dog()" << RESET << std::endl;
}

Dog::Dog(const Dog& c)
{
	Type = c.get_Type();
	std::cout << GREEN << "Copy Constructor Called Dog()" << RESET << std::endl;
}

Dog::Dog(std::string in_Type): Animal(in_Type)
{
	std::cout << GREEN << "Field Constructor Called Dog()" << RESET << std::endl;
}

// ------------------------------ Destructor ------------------------------- //
Dog::~Dog()
{
	std::cout << RED << "Destructor Called Dog()" << RESET << std::endl;
}
// ------------------------------- Operators ------------------------------- //

Dog & Dog::operator=(const Dog& c)
{
	Type = c.get_Type();
	std::cout << GREEN << "Copy Assignment Operator Called Dog()" << RESET << std::endl;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //
void	Dog::makeSound()const{std::cout << "Woof Woof" << std::endl;}
