#include "AMateria.hpp"

AMateria::AMateria(/* args */)
{
	std::cout << "AMateria default constructor" <<std::endl;
}

AMateria::AMateria(std::string const & type): _type(type)
{
	std::cout << "AMateria parameter constructor" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
	std::cout << "AMateria copy constructor" << std::endl;
	*this = src;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor" <<std::endl;
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

void		AMateria::use(ICharacter & target)
{
	std::cout << "AMateria::use ";
	std::cout << this->getType() << "*is used against*" << target.getName() << std::endl;
}