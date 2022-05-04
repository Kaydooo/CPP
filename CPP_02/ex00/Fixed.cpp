#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	std::cout << "Constructer Called" << std::endl;
	value = 0;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy Constructer Called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;

}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	std::cout << "= Overload called Called" << std::endl;
	//if ( this != &rhs )
	//{
		this->value = rhs.getRawBits();
	//}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void                Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
int                 Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}
/* ************************************************************************** */