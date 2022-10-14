#include "Fixed.hpp"

Fixed::Fixed(/* args */):_fixedPart(0)
{
	std::cout << "Default constructor called" << std::endl;
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

int	Fixed::getRawBits(void) const
{
	return (this->_fixedPart);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPart = raw * (1 << this->_bits);
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPart = rhs.getRawBits();
	return (*this);
}

