#include "Ice.hpp"

Ice::Ice(/* args */): _type("ice")
{
	std::cout << "Ice default constructor" << std::endl;
}

Ice::Ice(Ice const & src)
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
	}
	return (*this);
}