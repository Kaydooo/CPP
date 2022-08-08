#include "bsp.hpp"

//Ax(By - Cy) + Bx(Cy - Ay) + Cx(Ay - By)

Fixed calc_area(Point a, Point b, Point c)
{
	return (( a.get_x() * (b.get_y() - c.get_y())
			+ b.get_x() * (c.get_y() - a.get_y())
			+ c.get_x() * (a.get_y() - b.get_y())
			)/Fixed(2.0f));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed area, area1, area2, area3;
	area = calc_area(a, b, c);
	area1 = calc_area(a, b, point);
	area2 = calc_area(a, point, c);
	area3 = calc_area(point, b, c);
	if(area < 0)
		area = area * -1;
	if(area1 < 0)
		area1 = area1 * -1;
	if(area2 < 0)
		area2 = area2 * -1;
	if(area3 < 0)
		area3 = area3 * -1;
	
	if(area == (area1 + area2 + area3) && area1 !=0 && area2 != 0 && area3 != 0)
		return (1);
	return (0);
}
