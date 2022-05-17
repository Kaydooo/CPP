#include "Cat.hpp"

// ----------------------------- Constructors ------------------------------ //
Cat::Cat()
{
	Type = "Cat";
	_CAT_AUTO(32, "Default Constructor");
}

Cat::Cat(const Cat& c)
{
	Type = c.get_Type();
	_CAT_AUTO(32, "Copy Constructor");
}

Cat::Cat(std::string in_Type): Animal(in_Type)
{
	_CAT_AUTO(32, "Fields Constructor");
}

// ------------------------------ Destructor ------------------------------- //
Cat::~Cat()
{
	_CAT_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

Cat & Cat::operator=(const Cat& c)
{
	Type = c.get_Type();
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //
void	Cat::makeSound() const{std::cout << "Meoww.." << std::endl;}
