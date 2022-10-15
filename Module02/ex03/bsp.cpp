#include "Point.hpp"

bool	Point::bsp(Point const & a, Point const & b,\
Point const & c, Point const & point)
{
	float	denominator = ((Y2 - Y3)*(X1 - X3) + (X3 - X2)*(Y1 - Y3));
	float	side_a = ((Y2 - Y3)*(PX - X3) + (X3 - X2)*(PY - Y3)) / denominator;
	float	side_b = ((Y3 - Y1)*(PX - X3) + (X1 - X3)*(PY - Y3)) / denominator;
	float	side_c = 1 - side_a - side_b;
	return 0 < side_a && side_a <= 1 && 0 < side_b && side_b <= 1 && 0 < side_c && side_c <= 1;
}
