#include "Animal.hpp"

Animal::Animal(/* args */):_type("Stupid Animal")
{
	std::cout << "Animal default constructor" << std::endl;
}


Animal::Animal(Animal const & src)
{
	std::cout << "Animal copy constructor" << std::endl;
	*this = src;
}

Animal::Animal(std::string const & type): _type(type)
{
	std::cout << "Animal parameter constructor" << std::endl;
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

void		Animal::makeSound()const
{
	if (this->_type == "Cat")
		std::cout << "Meow" << std::endl;
	else if (this->_type == "Dog")
		std::cout << "Waf Waf" << std::endl;
	else
		std::cout << "???" << std::endl;
}