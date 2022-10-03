#include "Point.hpp"

Point::Point():x(0), y(0)
{
}

Point::Point(Fixed & X, Fixed & Y): x(X), y(Y)
{
}

Point::Point(float a, float b):x(a), y(b)
{
}

Point::Point(Point const & src) : x(src.x), y(src.y)
{
}

Point::~Point()
{
}

void	Point::getValues()
{
	std::cout << "salut " << this->x.toFloat() << std::endl;
	std::cout << "salut " << this->y.toFloat() << std::endl;
	std::cout << "salut " << this->x.toInt() << std::endl;
	std::cout << "salut " << this->y.toInt() << std::endl;

}

Point &	Point::operator=(Point & point)
{
	if (this != &point)
	{
		*(Fixed*)&x = point.x;
		*(Fixed*)&y = point.y;
	}
	return (*this);
}
