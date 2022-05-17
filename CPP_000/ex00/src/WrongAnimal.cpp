#include "WrongAnimal.hpp"

// ----------------------------- Constructors ------------------------------ //
WrongAnimal::WrongAnimal()
{
	_WRONGANIMAL_AUTO(32, "Default Constructor");
}

WrongAnimal::WrongAnimal(const WrongAnimal& c)
{
	_WRONGANIMAL_AUTO(32, "Copy Constructor");
	Type = c.get_Type();
}

WrongAnimal::WrongAnimal(std::string in_Type) : Type(in_Type)
{
	_WRONGANIMAL_AUTO(32, "Fields Constructor");
}

// ------------------------------ Destructor ------------------------------- //
WrongAnimal::~WrongAnimal()
{
	_WRONGANIMAL_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

WrongAnimal & WrongAnimal::operator=(const WrongAnimal& c)
{
	Type = c.get_Type();
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //
std::string WrongAnimal::get_Type() const{ return Type; }
void WrongAnimal::set_Type(std::string input){ Type = input; }



// --------------------------------- Methods ------------------------------- //

void	WrongAnimal::makeSound() const{std::cout << "TSSSS." << std::endl;}