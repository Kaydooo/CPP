#include "Point.hpp"


	Point::Point(void): x(0), y(0)
	{
	}
	Point::Point(const float f1, const float f2): x(f1), y(f2)
	{
	}
	Point::Point(Point const &other): x(other.x), y(other.y)
	{
	}
	Point::~Point(void)
	{	
	}
	Point	&Point::operator=(const Point &rhs)
	{
		*((Fixed*)(&x)) = rhs.x;
    	*((Fixed*)(&y)) = rhs.y;
		return (*this);

	}

	Fixed const Point::get_x() const
	{
		return(x);
	}
	
	Fixed const	Point::get_y() const
	{
		return(y);
	}


std::ostream	&operator<<(std::ostream &stream, const Point &rhs)
{
	stream << "(" << rhs.get_x() << ", " << rhs.get_y() << ")";
	return (stream);
}