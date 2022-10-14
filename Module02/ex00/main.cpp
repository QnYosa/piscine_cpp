#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	Fixed a; // on passe par le constructeur par defaut 
	Fixed b( a );
	Fixed c;

	std::cout << std::endl << "========EXEMPLE PAR DEFAUT=========" << std::endl;
	c = b;
	std::cout<< "a = " << a.getRawBits() << std::endl;
	std::cout<< "b = " << b.getRawBits() << std::endl;
	std::cout<< "c = " << c.getRawBits() << std::endl;

	std::cout << std::endl << "========EXEMPLE POSITIF=========" << std::endl;
	a.setRawBits(48); // Assignation d'un nombre
	std::cout<< "a = " << a.getRawBits() << std::endl;
	b = a;
	std::cout<< "b = " << b.getRawBits() << std::endl;
	c = b;
	std::cout<< "c = " << c.getRawBits() << std::endl;

	std::cout << std::endl << "========EXEMPLE NEGATIF=========" << std::endl;
	a.setRawBits(-48); // Assignation d'un nombre
	std::cout<< "a = " << a.getRawBits() << std::endl;
	b = a;
	std::cout<< "b = " << b.getRawBits() << std::endl;
	c = b;
	std::cout<< "c = " << c.getRawBits() << std::endl;
	return 0;
}
