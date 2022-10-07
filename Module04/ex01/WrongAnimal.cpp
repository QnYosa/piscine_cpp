#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(/* args */):_type("Unknown")
{
	std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "WrongAnimal copy constructor" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal	& WrongAnimal::operator=(WrongAnimal const & src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

std::string	 WrongAnimal::getType()const
{
	return (this->_type);
}

void		WrongAnimal::makeSound()const
{
	std::cout << "*RANDOM ANIMAL SOUND*" << std::endl;
}
