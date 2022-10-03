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
		Fixed(const int n);
		Fixed(const float f);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void)const;
		int		toInt(void)const;

		Fixed &	operator=(Fixed const & rhs);
};
	std::ostream & operator<<(std::ostream & out, Fixed const & rhs);
#endif