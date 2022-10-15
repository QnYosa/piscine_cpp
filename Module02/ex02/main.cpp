#include "Fixed.hpp"

int main( void )
{
	float add = 21.21f + 21.21f;
	Fixed a(0);
	Fixed b(add);
	Fixed	c;
	Fixed d(-46.7f);
	std::cout << "==========EQUAL OPERATOR=============\n";
	c = b;
	std::cout << c << std::endl;
	std::cout << "==========SUPERIOR===================\n";
	std::cout << (a > b) << std::endl;
	std::cout << (c > b) << std::endl;
	std::cout << "==========SUPERIOR OR EQUAL==========\n";
	std::cout << (a >= b) << std::endl;
	std::cout << (c >= b) << std::endl;
	std::cout << "==========INFERIOR===================\n";
	std::cout << (a <= b) << std::endl;
	std::cout << (c <= b) << std::endl;
	std::cout << "==========INFERIOR OR EQUAL==========\n";
	std::cout << (a <= b) << std::endl;
	std::cout << (c <= b) << std::endl;
	std::cout << "==========IS_EQUAL OPERATOR==========\n";
	std::cout << (a == b) << std::endl;
	std::cout << (c == b) << std::endl;
	std::cout << "==========IS_UNEQUAL OPERATOR========\n";
	std::cout << (a != b) << std::endl;
	std::cout << (c != b) << std::endl;
	std::cout << "==========PLUS OPERATOR========\n";
	std::cout << (d + b) << std::endl; // pas pertinent avec a
	std::cout << (c + b) << std::endl;
	std::cout << "==========MINUS OPERATOR========\n";
	std::cout << (d - b) << std::endl; // pas pertinent avec a
	std::cout << (c - b) << std::endl;
	std::cout << "==========TIMES OPERATOR========\n";
	std::cout << (d * b) << std::endl; // pas pertinent avec a
	std::cout << (c * b) << std::endl;
	std::cout << "==========DIVIDE OPERATOR========\n";
	std::cout << (d / b) << std::endl; // pas pertinent avec a
	std::cout << (c / b) << std::endl;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "ciao" << a << std::endl;
	// std::cout << add << std::endl;
	// std::cout << add++ << std::endl;
	// std::cout << "salut a = " << a++ << std::endl;
	// std::cout << "hello to float " << a.toFloat() << std::endl;
	std::cout << "==========PREINCREMENTATION===========\n";
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << "==========POSTINCREMENTATION==========\n";
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << "=================MIN==================\n";
	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << Fixed::min(b, d) << std::endl;
	std::cout << "=================MAX==================\n";
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::max(b, d) << std::endl;
	std::cout << "=================&MAX==================\n";
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::max(b, d) << std::endl;	
	std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}