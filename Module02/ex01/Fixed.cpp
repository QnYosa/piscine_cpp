#include "Fixed.hpp"
#include "math.h"

Fixed::Fixed(/* args */)
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPart = 0;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPart = n * (1 << this->_bits);
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPart = round(f * (1 << this->_bits));
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called " << std::endl;
	return (this->_fixedPart);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPart = raw * (1 << this->_bits);
}

int		Fixed::toInt(void)const
{
	return (this->getRawBits() / (1 << this->_bits));
}

float	Fixed::toFloat(void)const
{
	return ((float)this->getRawBits() / (float)(1 << this->_bits));
}

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