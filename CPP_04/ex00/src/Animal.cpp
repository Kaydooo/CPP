#include "Animal.hpp"

// ----------------------------- Constructors ------------------------------ //
Animal::Animal()
{
	Type = "Animal";
	_ANIMAL_AUTO(32, "Default Constructor");
}

Animal::Animal(const Animal& c)
{
	_ANIMAL_AUTO(32, "Copy Constructor");
	Type = c.get_Type();
}

Animal::Animal(std::string in_Type) : Type(in_Type)
{
	_ANIMAL_AUTO(32, "Fields Constructor");
}

// ------------------------------ Destructor ------------------------------- //
Animal::~Animal()
{
	_ANIMAL_AUTO(31, "Destructor called");
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

void	Animal::makeSound() const{std::cout << "no sound.." << std::endl;}
