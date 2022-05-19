#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	std::cout << GREEN << "Default Constructor Called" << RESET << std::endl;
	value = 0;
}

Fixed::Fixed(const int int_value)
{
	std::cout << CYAN << "Int Constructor Called" << RESET << std::endl;
	value = int_value << bits;
}

Fixed::Fixed(const float float_value)
{
	std::cout << CYAN << "Float Constructor Called" << RESET << std::endl;
	value = roundf(float_value * (1 << bits));
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
	std::cout << RED << "Destructor Called" << RESET << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &Fixed::operator=( Fixed const & rhs )
{
	std::cout << YELLOW << "Copy assignment operator called" << RESET << std::endl;
	if ( this != &rhs )
	{
		this->value = rhs.getRawBits();
	}
	return *this;
}

std::ostream &operator<<(std::ostream &lhs, const Fixed &rhs)
{
	//std::cout << "Operator<< Overload Called" << std::endl;
	lhs << rhs.toFloat();
	return lhs;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits Called" << std::endl;
	this->value = raw;
}

int		Fixed::toInt(void) const
{
//	std::cout << "toInt Called" << std::endl;
	return (value >> bits);
}

float	Fixed::toFloat(void) const
{
	//std::cout << "toFloat Called" << std::endl;
	return((float)value / (1<<bits));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int		Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits Called" << std::endl;
	return this->value;
}

/* ************************************************************************** */