#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
private:
	int					_fixedPart;
	static const int	_bits = 8;
public:
	Fixed(/* args */);
	Fixed(Fixed const & src);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed &	operator=(Fixed const & rhs);
};
#endif