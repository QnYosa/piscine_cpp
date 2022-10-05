#include "WrongCat.hpp"

WrongCat::WrongCat(/* args */)
{
	std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src)
{
	std::cout << "WrongCat constructor" << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

std::string		WrongCat::getType()const
{
	return (this->_type);
}