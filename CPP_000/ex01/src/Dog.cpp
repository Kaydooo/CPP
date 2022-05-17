#include "Dog.hpp"

// ----------------------------- Constructors ------------------------------ //
Dog::Dog()
{
	Type = "Dog";
	this->b_obj = new Brain();
	_DOG_AUTO(32, "Default Constructor");
}

Dog::Dog(const Dog& c): Animal()
{
	Type = c.get_Type();
	b_obj = new Brain();
	*b_obj = *(c.b_obj);
	_DOG_AUTO(32, "Copy Constructor");
}

Dog::Dog(std::string in_Type): Animal(in_Type)
{
	this->b_obj = new Brain();
	_DOG_AUTO(32, "Fields Constructor");
}

// ------------------------------ Destructor ------------------------------- //
Dog::~Dog()
{
	delete b_obj;
	_DOG_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

Dog & Dog::operator=(const Dog& c)
{
	Type = c.get_Type();
	b_obj = new Brain();
	*b_obj = *(c.b_obj);
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //
void	Dog::makeSound()const{std::cout << "Woof Woof" << std::endl;}
