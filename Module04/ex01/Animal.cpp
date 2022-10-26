#include "Animal.hpp"

Animal::Animal():_type("Who Cares?")
{
	std::cout << "Animal default constructor" << std::endl;
}


Animal::Animal(Animal const & src): _type("Who Cares")
{
	std::cout << "Animal copy constructor" << std::endl;
	*this = src;
}

Animal::Animal(std::string const & type):_type(type)
{
	std::cout << "Animal Parameter Constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destuctor" << std::endl;
}

Animal & 	Animal::operator=(Animal const & src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

std::string Animal::getType()const
{
	return (this->_type);
}

void		Animal::setType(std::string const & type)
{
	this->_type = type;
}

void		Animal::makeSound()const
{
	std::cout << "Don't know what to say hum: HI HAAAAN" << std::endl;
}

void		Animal::setIdea(std::string const & idea)
{
	(void)idea;
	std::cout << "I'm not supposed to have any idea" << std::endl;
}

void		Animal::getIdeas()const
{
	std::cout << "Animal not supposed to have any idea" << std::endl;
}