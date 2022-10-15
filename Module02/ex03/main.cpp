#include "Point.hpp"

void	no_error()
{
	return ;
	float add = 21.21f + 21.21f;
	Fixed	a(0);
	Fixed 	b(add);
	Fixed	c;
	Fixed	d(-46.7f);
	Fixed	e(21.5f);
	Fixed	f(20.5f);
	std::cout << "==========EQUAL OPERATOR=============\n";
	std::cout << "c is equal to = " << c << std::endl;
	c = b;
	std::cout << "c is now equal to = " << c << std::endl;
	std::cout << "==========SUPERIOR===================\n";
	{	
		std::cout << (a > b) << std::endl; //doit renvoyer 0
		std::cout << (c > b) << std::endl; // doit renvoyer 0 car egal 
		std::cout << (b > a) << std::endl; //doit renvoyer 1
		std::cout << (b > d) << std::endl; // doit renvoyr 1
		std::cout << (a > d) << std::endl; // doit renvoyr 1
	}
	std::cout << "==========SUPERIOR OR EQUAL==========\n";
	{
		std::cout << (a >= b) << std::endl; // return 0
		std::cout << (c >= b) << std::endl; // return 1
		std::cout << (d >= b) << std::endl; // return 0
		std::cout << (b >= d) << std::endl; // return 1
	}
	std::cout << "==========INFERIOR===================\n";
	{
		std::cout << (a < b) << std::endl; // return 1
		std::cout << (c < b) << std::endl; // return 0
		std::cout << (d < b) << std::endl; // return 1
		std::cout << (b < d) << std::endl; // return 0
	}
	std::cout << "==========INFERIOR OR EQUAL==========\n";
	{
		std::cout << (a <= b) << std::endl; // return 1
		std::cout << (c <= b) << std::endl; // return 1
		std::cout << (d <= b) << std::endl; // return 1
		std::cout << (b <= d) << std::endl; // return 0
	}
	std::cout << "==========IS_EQUAL OPERATOR==========\n";
	{
		std::cout << (a == b) << std::endl; // return 0
		std::cout << (c == b) << std::endl; // return 1
	}
	std::cout << "==========IS_UNEQUAL OPERATOR========\n";
	{
		std::cout << (a != b) << std::endl; // return 1
		std::cout << (c != b) << std::endl; // return 0
	}
	std::cout << "==========PLUS OPERATOR========\n";
	{
		std::cout << (e + f) << std::endl; // 42
		std::cout << (d + f) << std::endl; // -26.2
	}
	std::cout << "==========MINUS OPERATOR========\n";
	{
		std::cout << (d - b) << std::endl; // -89.12
		std::cout << (c - b) << std::endl; // 0
		std::cout << (a - c) << std::endl; // -42.42
	}
	std::cout << "==========TIMES OPERATOR========\n";
	{	
		std::cout << (e * f) << std::endl; // 440.75
		std::cout << (c * b) << std::endl; // 1799.4564
	}
	std::cout << "==========DIVIDE OPERATOR========\n";
	{	
		Fixed a(20.0f);
		Fixed b(4.5f);
		std::cout << (a/ b) << std::endl; // 4.444444
		std::cout << (b / a) << std::endl; // 0.225
	}
	std::cout << "==========PRE-INCREMENTATION===========\n";
	{
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << ++b << std::endl;
		std::cout << b << std::endl;
	}
	std::cout << "==========POST-INCREMENTATION==========\n";
	{	
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b++ << std::endl;
		std::cout << b << std::endl;
	}
	std::cout << "==========PRE-DECREMENTATION===========\n";
	{
		std::cout << --a << std::endl;
		std::cout << a << std::endl;
		std::cout << --b << std::endl;
		std::cout << b << std::endl;
	}
	std::cout << "==========POST-DECREMENTATION==========\n";
	{	
		std::cout << a-- << std::endl;
		std::cout << a << std::endl;
		std::cout << b-- << std::endl;
		std::cout << b << std::endl;
	}
	std::cout << "=================MIN==================\n";
	{
		std::cout << Fixed::min(a, b) << std::endl; // 0
		std::cout << Fixed::min(b, d) << std::endl; // -46.7
	}
	std::cout << "=================MAX==================\n";
	{
		std::cout << Fixed::max(a, b) << std::endl; // 42.42
		std::cout << Fixed::max(e, f) << std::endl; // 21.5
	}
	std::cout << "=================CONST================\n";
	{
		Fixed const A(84.56f);
		Fixed const B(74.26f);
		std::cout << "=================&MAX==================\n";
		std::cout << Fixed::max(A, B) << std::endl; // 84.56
		std::cout << "=================&MIN==================\n";
		std::cout << Fixed::min(A, B) << std::endl;// 74.26
	}
	std::cout << a << std::endl;
}

int main()
{
	Point	a(0, 0);
	Point	b(10, 30);
	Point	c(20, 0);
	Point	p(10, 15); // if x = 30 = outside
	Point	outside(30, 15);
	Point	on(20, 0);
	no_error();
	int result = p.bsp(a, b, c, p);
	std::cout << "result  = " << result << std::endl;
	result = p.bsp(a, b, c, outside);
	std::cout << "result  = " << result << std::endl;
	result = p.bsp(a, b, c, on);
	std::cout << "result  = " << result << std::endl;
	// std::cout << a.toInt() << std::endl << b.toInt() << std::endl;
	return (0);
}