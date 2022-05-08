#include "Dog.hpp"
#include "Dog.hpp"

// ----------------------------- Constructors ------------------------------ //
Dog::Dog()
{
	Type = "Dog";
	_DOG_AUTO(32, "Default Constructor");
}

Dog::Dog(const Dog& c)
{
	Type = c.get_Type();
	_DOG_AUTO(32, "Copy Constructor");
}

Dog::Dog(std::string in_Type): Animal(in_Type)
{
	_DOG_AUTO(32, "Fields Constructor");
}

// ------------------------------ Destructor ------------------------------- //
Dog::~Dog()
{
	_DOG_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

Dog & Dog::operator=(const Dog& c)
{
	Type = c.get_Type();
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //
void	Dog::makeSound()const{std::cout << "Woof Woof" << std::endl;}
