#include "Ice.hpp"

Ice::Ice(/* args */): AMateria("ice")
{
	std::cout << "Ice default constructor" << std::endl;
}

Ice::Ice(Ice const & src): AMateria(src)
{
	std::cout << "Ice copy constructor" << std::endl;
	*this = src;
}

Ice::~Ice()
{
	std::cout << "Ice destructor" << std::endl;
}

Ice	&	Ice::operator=(Ice const & src)
{
	if (this != &src)
	{
		this->_type = src._type;
	}
	return (*this);
}

AMateria* Ice::clone()const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter& target)
{
	std::cout << "*shoots an ice bolt at " << target.getName() \
	<< "*" << std::endl;
}