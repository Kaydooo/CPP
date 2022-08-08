#ifndef __BSP_HPP__
# define __BSP_HPP__

#include "Point.hpp"

Fixed	calc_area(Point a, Point b, Point c);
bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif