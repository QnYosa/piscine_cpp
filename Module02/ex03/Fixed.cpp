#include "Fixed.hpp"

Fixed::Fixed(/* args */)
{
	std::cout << "Fixed Default constructor" << std::endl;
	this->_fixedPart = 0 * (1 << this->_bits);
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Fixed Copy constructor" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Fixed Destructor" << std::endl;
}

Fixed::Fixed(const int n)
{
	std::cout << "Fixed Int constructor" << std::endl;
	this->_fixedPart = n * (1 << this->_bits);
}

Fixed::Fixed(const float f)
{
	std::cout << "Fixed Float constructor called" << std::endl;
	this->_fixedPart = f * (1 << this->_bits);
}

int	Fixed::getRawBits(void) const
{
	return (this->_fixedPart);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPart = raw * (1 << this->_bits);
}

void	Fixed::setRawBits(float const raw)
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

int	Fixed::operator<(Fixed const & klass)
{
	return (this->toFloat() < klass.toFloat());
}

int	Fixed::operator>(Fixed const & klass)
{
	return (this->toFloat() > klass.toFloat());
}

int	Fixed::operator>=(Fixed const & klass)
{
	if (this->getRawBits() == klass.getRawBits())
		return (1);
	else if (this->getRawBits() > klass.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator<=(Fixed const & klass)
{
	if (this->getRawBits() == klass.getRawBits())
		return (1);
	else if (this->getRawBits() < klass.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator==(Fixed const & klass)
{
	if (this->getRawBits() == klass.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator!=(Fixed const & klass)
{
	if (this->getRawBits() != klass.getRawBits())
		return (1);
	return (0);
}

float	Fixed::operator+(Fixed const & klass)
{
	return ((float)(this->toFloat() + klass.toFloat()));
}

float	Fixed::operator-(Fixed const & klass)
{
	return ((float)(this->toFloat() - klass.toFloat()));
}

float	Fixed::operator*(Fixed const & klass)
{
	return ((float)(this->toFloat() * klass.toFloat()));
}

float	Fixed::operator/(Fixed const & klass)
{
	return ((float)(this->toFloat() / klass.toFloat()));
}

Fixed &	Fixed::operator++()
{
	this->_fixedPart++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed &	Fixed::operator--()
{
	this->_fixedPart--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}
Fixed &	Fixed::min(Fixed & a, Fixed & b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed & Fixed::min(Fixed const & a, Fixed const & b)
{
	std::cout << ">>>>>>>>>>CONST MIN<<<<<<<<<<<\n";
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed & Fixed::max(Fixed const & a, Fixed const & b)
{
	std::cout << ">>>>>>>>>>CONST MAX<<<<<<<<<<<\n";
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}