#include "Cat.hpp"

Cat::Cat(/* args */):Animal("Cat")
{
	std::cout << "Cat default constructor" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const & src)
{
	std::cout << "Cat copy constructor" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

Cat & Cat::operator=(Cat const & src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

std::string	Cat::getType()const
{
	return (this->_type);
}
