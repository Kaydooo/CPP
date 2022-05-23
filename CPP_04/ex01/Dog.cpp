#include "Dog.hpp"

// ----------------------------- Constructors ------------------------------ //
Dog::Dog()
{
	Type = "Dog";
	this->b_obj = new Brain();
	std::cout << GREEN << "Default Constructor Called Dog()" << RESET << std::endl;

}

Dog::Dog(const Dog& c): Animal()
{
	Type = c.get_Type();
	b_obj = new Brain();
	*b_obj = *(c.b_obj);
	std::cout << GREEN << "Copy Constructor Called Dog()" << RESET << std::endl;

}

Dog::Dog(std::string in_Type): Animal(in_Type)
{
	this->b_obj = new Brain();
	std::cout << GREEN << "Field Constructor Called Dog()" << RESET << std::endl;
}

// ------------------------------ Destructor ------------------------------- //
Dog::~Dog()
{
	delete b_obj;
	std::cout << RED << "Destructor Called Dog()" << RESET << std::endl;

}
// ------------------------------- Operators ------------------------------- //

Dog & Dog::operator=(const Dog& c)
{
	Type = c.get_Type();
	b_obj = new Brain();
	*b_obj = *(c.b_obj);
	std::cout << GREEN << "Copy Assignment Operator Called Dog()" << RESET << std::endl;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //
void	Dog::makeSound()const{std::cout << "Woof Woof" << std::endl;}
