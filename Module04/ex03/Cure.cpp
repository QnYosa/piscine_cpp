#include "Cure.hpp"

Cure::Cure(/* args */): _type("cure")
{
	std::cout << "Cure constructor" << std::endl;
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

std::string	const & Cure::getType()const
{
	return (this->_type);
}

AMateria* Cure::clone()const
{

}

void	Cure::use(ICharacter& target)
{
	
}