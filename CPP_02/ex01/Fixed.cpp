#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	std::cout << "Default Constructer Called" << std::endl;
	value = 0;
}

Fixed::Fixed(const int int_value)
{
	std::cout << "Int Constructer Called" << std::endl;
	value = int_value << bits;
}
Fixed::Fixed(const float float_value)
{
	std::cout << "Float Constructer Called" << std::endl;
	value = roundf(float_value * (1 << bits));
}


Fixed::Fixed( const Fixed & src )
{
	std::cout << "P_Constructer Called" << std::endl;
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

Fixed &Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Operator= Overload Called" << std::endl;
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