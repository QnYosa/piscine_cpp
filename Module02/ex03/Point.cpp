#include "Point.hpp"

Point::Point():x(0), y(0)
{
	std::cout << "Point default constructor" << std::endl;
}

Point::Point(Fixed & X, Fixed & Y): x(X), y(Y)
{
	std::cout << "Point copy constructor" << std::endl;
}

Point::Point(float a, float b):x(a), y(b)
{
	std::cout << "Point constructor" << std::endl;
}

Point::Point(Point const & src) : x(src.x), y(src.y)
{
	std::cout << "Point constructor" << std::endl;
}

Point::~Point()
{
	std::cout << "Point constructor" << std::endl;
}

void	Point::displayValues()const
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
