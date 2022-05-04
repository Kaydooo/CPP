#include "bsp.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point);

static void	testBsp(const Point a, const Point b, const Point c, const Point point)
{
	std::cout << point << " in " << "(" << a << ", " << b << ", " << c << "): ";
	std::cout << std::boolalpha << bsp(a, b, c, point) << std::endl;
}

int main( void )
{
	Point	a(0, 0);
	Point	b(10, 30);
	Point	c(20, 0);

	testBsp(a, b, c, Point(10, 0));
	testBsp(a, b, c, Point(20.2, 0));
	testBsp(a, b, c, Point(30, 0));
	testBsp(a, b, c, Point(-1, 0));
	testBsp(a, b, c, Point(123.54, -781));
	testBsp(a, b, c, Point(-5, -20));
	testBsp(a, b, c, Point(10, 15));
}
// int main(void) {


// 	float x1 = 0;
// 	float y1 = 0;
// 	float x2 = 10;
// 	float y2 = 30;
// 	float x3 = 20;
// 	float y3 = 0;
// 	float x = 30;
// 	float y = 15;

// 	Point	a(x1, y1);
// 	Point	b(x2, y2);
// 	Point	c(x3, y3);
// 	Point	point(x, y);

// 	std::cout << "Result is " << bsp(a, b, c, point) << std::endl;

// 	return (0);
// }