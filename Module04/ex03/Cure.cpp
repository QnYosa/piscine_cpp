#include "Cure.hpp"

Cure::Cure(/* args */): AMateria("cure")
{
	std::cout << "Cure default constructor" << std::endl;
}

Cure::Cure(Cure const & src)
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
	}
	return (*this);
}

AMateria* Cure::clone()const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() \
	<< "'s wounds *" << std::endl;
}