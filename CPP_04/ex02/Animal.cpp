#include "Animal.hpp"

// ----------------------------- Constructors ------------------------------ //
Animal::Animal()
{
	std::cout << GREEN << "Default Constructor Called Animal()" << RESET << std::endl;

}

Animal::Animal(const Animal& c)
{
	std::cout << GREEN << "Copy Constructor Called Animal()" << RESET << std::endl;

	Type = c.get_Type();
}

Animal::Animal(std::string in_Type) : Type(in_Type)
{
	std::cout << GREEN << "String Constructor Called Animal(std::string in_Type)" << RESET << std::endl;

}

// ------------------------------ Destructor ------------------------------- //
Animal::~Animal()
{
	std::cout << RED << "Destructor Called ~Animal()" << RESET << std::endl;

}
// ------------------------------- Operators ------------------------------- //

Animal & Animal::operator=(const Animal& c)
{
	Type = c.get_Type();
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //
std::string Animal::get_Type() const{ return Type; }
void Animal::set_Type(std::string input){ Type = input; }



// --------------------------------- Methods ------------------------------- //

void	Animal::makeSound() const{std::cout << "Unknown Sound.." << std::endl;}