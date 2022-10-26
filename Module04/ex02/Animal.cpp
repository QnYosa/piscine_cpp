#include "Animal.hpp"

AAnimal::AAnimal(/* args */):_type("Who Cares?")
{
	std::cout << "AAnimal default constructor" << std::endl;
}


AAnimal::AAnimal(AAnimal const & src):_type("Who Cares?")
{
	std::cout << "AAnimal copy constructor" << std::endl;
	*this = src;
}

AAnimal::AAnimal(std::string const & type):_type(type)
{
	std::cout << "AAnimal Parameter Constructor" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destuctor" << std::endl;
}

AAnimal & 	AAnimal::operator=(AAnimal const & src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

std::string AAnimal::getType()const
{
	return (this->_type);
}

void		AAnimal::setType(std::string const & type)
{
	this->_type = type;
}

void		AAnimal::makeSound()const
{
	std::cout << "Don't know what to say hum: HI HAAAAN" << std::endl;
}

void		AAnimal::setIdea(std::string const & idea)
{
	(void)idea;
	std::cout << "I'm not supposed to have any idea" << std::endl;
}

void		AAnimal::getIdeas()const
{
	std::cout << "AAnimal not supposed to have any idea" << std::endl;
}