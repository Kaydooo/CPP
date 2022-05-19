#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	std::cout << GREEN << "Default Constructor Called" << RESET << std::endl;
	value = 0;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << CYAN << "Copy Constructor Called" << RESET << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << RED <<  "Destructor Called" << RESET << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed	&Fixed::operator=( Fixed const & rhs )
{
	std::cout << YELLOW << "Copy assignment operator called" << RESET << std::endl;
	if ( this != &rhs )
		this->value = rhs.getRawBits();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}
/* ************************************************************************** */