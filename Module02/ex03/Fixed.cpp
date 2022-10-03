#include "Fixed.hpp"

Fixed::Fixed(/* args */)
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPart = 0 * (1 << this->_bits);
}

Fixed::Fixed(Fixed const & src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_fixedPart = n * (1 << this->_bits);
}

Fixed::Fixed(const float f)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_fixedPart = f * (1 << this->_bits);
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
	float	precision = 0.000000001f;
	if (this->toFloat() - klass.toFloat() < precision)
		return (1);
	else if (this->toFloat() > klass.toFloat())
		return (1);
	return (0);
}

int	Fixed::operator<=(Fixed const & klass)
{
	float	precision = 0.00000001f;
	if (this->toFloat() - klass.toFloat() < precision)
	{
		// std::cout << "I'm equal" << std::endl;
		return (1);
	}
	else if (this->toFloat() < klass.toFloat())
	{
		// std::cout << "I'm lesser" << std::endl;
	}
	// std::cout << "I'm superior" << std::endl;
	return (0);
}

int	Fixed::operator==(Fixed const & klass)
{
	float	precision = 0.00000001f;
	if (this->toFloat() - klass.toFloat() < precision)
	{
		// std::cout << "I'm equal" << std::endl;
		return (1);
	}
	return (0);
}

int	Fixed::operator!=(Fixed const & klass)
{
	float	precision = 0.00000001f;
	if (this->toFloat() - klass.toFloat() > precision)
	{
		std::cout << "I'm unequal" << std::endl;
		return (1);
	}
	std::cout << "I'm equal" << std::endl;
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

// static Fixed &	min(Fixed & a, Fixed & b)
// {
// 	if (a.getRawBits() < b.getRawBits())
// 		return (a);
// 	return (b);
// }

// static Fixed const & min(Fixed const & a, Fixed const & b)
// {
// 	if (a.getRawBits() < b.getRawBits())
// 		return (a);
// 	return (b);
// }

// static Fixed &		max(Fixed & a, Fixed & b)
// {
// 	if (a.getRawBits() > b.getRawBits())
// 		return (a);
// 	return (b);
// }

// static Fixed const & max(Fixed const & a, Fixed const & b)
// {
// 	if (a.getRawBits() > b.getRawBits())
// 		return (a);
// 	return (b);
// }