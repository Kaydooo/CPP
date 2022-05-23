#include "WrongCat.hpp"

// ----------------------------- Constructors ------------------------------ //
WrongCat::WrongCat()
{
	Type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& c): WrongAnimal()
{
	Type = c.get_Type();
}

WrongCat::WrongCat(std::string in_Type): WrongAnimal(in_Type)
{
}

// ------------------------------ Destructor ------------------------------- //
WrongCat::~WrongCat()
{
}
// ------------------------------- Operators ------------------------------- //

WrongCat & WrongCat::operator=(const WrongCat& c)
{
	Type = c.get_Type();
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //
void	WrongCat::makeSound() const{std::cout << "Meoww.." << std::endl;}
