#include "WrongCat.hpp"
	
// ----------------------------- Constructors ------------------------------ //
WrongCat::WrongCat()
{
	Type = "WrongCat";
	std::cout << GREEN << "Default Constructor Called WrongCat()" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& c): WrongAnimal()
{
	Type = c.get_Type();
	std::cout << GREEN << "Copy Constructor Called WrongCat()" << RESET << std::endl;
}

WrongCat::WrongCat(std::string in_Type): WrongAnimal(in_Type)
{
	std::cout << GREEN << "String Constructor Called WrongCat(std::string in_Type)" << RESET << std::endl;
}

// ------------------------------ Destructor ------------------------------- //
WrongCat::~WrongCat()
{
	std::cout << RED << "Destructor Called ~WrongCat()" << RESET << std::endl;
}
// ------------------------------- Operators ------------------------------- //

WrongCat & WrongCat::operator=(const WrongCat& c)
{
	Type = c.get_Type();
	std::cout << GREEN << "Copy Assignment Operator WrongCat()" << RESET << std::endl;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //
void	WrongCat::makeSound() const{std::cout << "Meoww.." << std::endl;}
