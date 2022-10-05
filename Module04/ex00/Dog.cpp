#include "Dog.hpp"

Dog::Dog(/* args */):Animal("Dog")
{
	std::cout << "Dog default constructor" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const & src)
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

Dog &	Dog::operator=(Dog const & src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

std::string	Dog::getType()const
{
	return (this->_type);
}
