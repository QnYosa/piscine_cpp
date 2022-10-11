#include "AMateria.hpp"


AMateria::AMateria(/* args */)
{
	std::cout << "AMateria default constructor" <<std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor" <<std::endl;
}

AMateria::AMateria(AMateria const & src)
{
	std::cout << "AMateria copy constructor" << std::endl;
	*this = src;
}

std::string const & AMateria::getType()const
{
	return (_type);
}

AMateria	& AMateria::operator=(AMateria const & src)
{
	(void)src;
	return (*this);
}