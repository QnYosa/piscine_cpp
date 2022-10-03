#include "Point.hpp"

int main()
{
	// Fixed a(54);
	// Fixed b(25);
	// Point p(a,b);
	// Point s;
	// Point f(2.14, 2.34);
	// Point cpy(f);
	// f.getValues();
	// s.getValues();
	// p.getValues();
	// cpy.getValues();

	// cpy = p;
	// cpy.getValues();

	Point	a(0, 0);
	Point	b(10, 30);
	Point	c(20, 0);
	Point	p(10, 15); // if x = 30 = outside


	int result = p.bsp(a, b, c, p);
	std::cout << "result  = " << result << std::endl;
	// std::cout << a.toInt() << std::endl << b.toInt() << std::endl;
}