#include "Ice.hpp"

Ice::Ice(/* args */): AMateria("ice"), _is_used(false)
{
	std::cout << "Ice default constructor" << std::endl;
}

Ice::Ice(Ice const & src): AMateria(src), _is_used(false)
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
		_is_used = src._is_used;
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

int			Ice::getIsUsed()const
{
	return (_is_used);
}

void		Ice::setIsUsed(int x)
{
	_is_used = x;
}