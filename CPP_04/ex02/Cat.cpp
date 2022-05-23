#include "Cat.hpp"

// ----------------------------- Constructors ------------------------------ //
Cat::Cat()
{
	Type = "Cat";
	this->b_obj = new Brain();
	std::cout << GREEN << "Default Constructor Called Cat()" << RESET << std::endl;
}

Cat::Cat(const Cat& c): Animal()
{
	Type = c.get_Type();
	b_obj = new Brain();
	*b_obj = *(c.b_obj);
	std::cout << GREEN << "Copy Constructor Called Cat()" << RESET << std::endl;

}

Cat::Cat(std::string in_Type): Animal(in_Type)
{
	this->b_obj = new Brain();
	std::cout << GREEN << "Field Constructor Called Cat()" << RESET << std::endl;
}

// ------------------------------ Destructor ------------------------------- //
Cat::~Cat()
{
	delete b_obj;
	std::cout << RED << "Destructor Called Cat()" << RESET << std::endl;
}
// ------------------------------- Operators ------------------------------- //

Cat & Cat::operator=(const Cat& c)
{
	Type = c.get_Type();
	b_obj = new Brain();
	*b_obj = *(c.b_obj);
	std::cout << GREEN << "Copy Assignment Operator Called Cat()" << RESET << std::endl;

	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //
void	Cat::makeSound() const{std::cout << "Meoww.." << std::endl;}
