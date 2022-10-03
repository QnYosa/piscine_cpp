#include "Fixed.hpp"

int main( void )
{
	float add = 21.21f + 21.21f;
	Fixed a(0);
	Fixed b(add);
	std::cout << (a >= b) << std::endl;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "ciao" << a << std::endl;
	// std::cout << add << std::endl;
	// std::cout << add++ << std::endl;
	// std::cout << "salut a = " << a++ << std::endl;
	// std::cout << "hello to float " << a.toFloat() << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}