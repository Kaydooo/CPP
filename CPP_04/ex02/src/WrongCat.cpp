#include "WrongCat.hpp"

// ----------------------------- Constructors ------------------------------ //
WrongCat::WrongCat()
{
	_WRONGCAT_AUTO(32, "Default Constructor");
	Type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& c): WrongAnimal()
{
	Type = c.get_Type();
	_WRONGCAT_AUTO(32, "Copy Constructor");
}

WrongCat::WrongCat(std::string in_Type): WrongAnimal(in_Type)
{
	_WRONGCAT_AUTO(32, "Fields Constructor");
}

// ------------------------------ Destructor ------------------------------- //
WrongCat::~WrongCat()
{
	_WRONGCAT_AUTO(31, "Destructor called");
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
