#ifndef POINT_H
# define POINT_H

# define X1 a.x.toFloat()
# define Y1 a.y.toFloat()
# define X2 b.x.toFloat()
# define Y2 b.y.toFloat()
# define X3 c.x.toFloat()
# define Y3 c.y.toFloat()
# define PX point.x.toFloat()
# define PY point.y.toFloat()
#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();//default constructor
		Point(Fixed & X, Fixed & Y);
		Point(float x, float y);
		Point(Point const & src);
		~Point();
		void		getValues();
		Point &		operator=(Point & point);
   		bool 		bsp(Point const & a, Point const & b, Point const & c, Point const & point);
};

#endif