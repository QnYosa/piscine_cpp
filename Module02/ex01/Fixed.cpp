#include "Fixed.hpp"
#include "math.h"

/*==================CONSTRUCTEURS=======================*/
Fixed::Fixed(/* args */):_fixedPart(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	this->_fixedPart = n * (1 << this->_bits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	this->_fixedPart = round(f * (1 << this->_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src):_fixedPart(0)
{
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/*==================GETTER/SETTER===========================*/
int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called " << std::endl;
	return (this->_fixedPart);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPart = raw * (1 << this->_bits);
}

/*===================OPERATIONS==========================*/

int		Fixed::toInt(void)const
{
	return (this->getRawBits() / (1 << this->_bits));
}

float	Fixed::toFloat(void)const
{
	return ((float)this->getRawBits() / (float)(1 << this->_bits));
}

/*=================OVERLOADS=========================*/

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPart = rhs.getRawBits();
	return (*this);
}

std::ostream	& operator<<(std::ostream & out, Fixed const & rhs)
{
	out << (float)rhs.toFloat();
	return (out);
}