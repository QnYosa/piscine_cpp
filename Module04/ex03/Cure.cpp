#include "Cure.hpp"

Cure::Cure(/* args */): AMateria("cure"), _is_used(false)
{
	std::cout << "Cure default constructor" << std::endl;
}

Cure::Cure(Cure const & src):  AMateria("cure"), _is_used(false)
{
	std::cout << "Cure copy constructor" << std::endl;
	*this = src;
}

Cure::~Cure()
{
	std::cout << "Cure destructor" << std::endl;
}

Cure &		Cure::operator=(Cure const & src)
{
	if (this != &src)
	{
		this->_type = src._type;
		_is_used  = src._is_used;
	}
	return (*this);
}

AMateria*	Cure::clone()const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() \
	<< "'s wounds *" << std::endl;
}

int			Cure::getIsUsed()const
{
	return (_is_used);
}

void		Cure::setIsUsed(int x)
{
	_is_used = x;
}
