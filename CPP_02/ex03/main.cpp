#include "bsp.hpp"

int main( void )
{
	Point	a(0, 0);
	Point	b(10, 30);
	Point	c(20, 0);

	Point	p1(10, 30);
	Point	p2(10, 29.9);
	Point	p3(9, 30);
	Point	p4(0, 0);
	Point	p5(1, 1);

	std::cout << bsp(a, b, c, p1) << std::endl;
	std::cout << bsp(a, b, c, p2) << std::endl;
	std::cout << bsp(a, b, c, p3) << std::endl;
	std::cout << bsp(a, b, c, p4) << std::endl;
	std::cout << bsp(a, b, c, p5) << std::endl;

}
