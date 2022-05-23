#include "Dog.hpp"

// ----------------------------- Constructors ------------------------------ //
Dog::Dog()
{
	Type = "Dog";
	this->b_obj = new Brain();
}

Dog::Dog(const Dog& c): Animal()
{
	Type = c.get_Type();
	b_obj = new Brain();
	*b_obj = *(c.b_obj);
}

Dog::Dog(std::string in_Type): Animal(in_Type)
{
	this->b_obj = new Brain();
}

// ------------------------------ Destructor ------------------------------- //
Dog::~Dog()
{
	delete b_obj;
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
