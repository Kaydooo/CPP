#include "Cat.hpp"

// ----------------------------- Constructors ------------------------------ //
Cat::Cat()
{
	Type = "Cat";
	this->b_obj = new Brain();
}

Cat::Cat(const Cat& c): Animal()
{
	Type = c.get_Type();
	b_obj = new Brain();
	*b_obj = *(c.b_obj);
}

Cat::Cat(std::string in_Type): Animal(in_Type)
{
	this->b_obj = new Brain();
}

// ------------------------------ Destructor ------------------------------- //
Cat::~Cat()
{
	delete b_obj;
}
// ------------------------------- Operators ------------------------------- //

Cat & Cat::operator=(const Cat& c)
{
	Type = c.get_Type();
	b_obj = new Brain();
	*b_obj = *(c.b_obj);
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //
void	Cat::makeSound() const{std::cout << "Meoww.." << std::endl;}
