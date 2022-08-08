#include "Fixed.hpp"

class Point
{
	public:
		Point(void);
		Point(const	float f1, const float f2);
		Point(const Point &other);
		~Point(void);
		Point &operator=(const Point &rhs);

		Fixed const	get_x() const;
		Fixed const	get_y() const;

	private:
		Fixed const x;
		Fixed const y;
};

std::ostream	&operator<<(std::ostream &out, const Point &rhs);