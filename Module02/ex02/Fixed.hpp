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

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		void				setRawBits(float const raw);

		float				toFloat(void)const;
		int					toInt(void)const;

		Fixed &				operator=(Fixed const & rhs);
		int 				operator<(Fixed const & klass);
		int					operator>(Fixed const & klass);
		int					operator>=(Fixed const & klass);
		int					operator<=(Fixed const & klass);
		int					operator==(Fixed const & klass);
		int					operator!=(Fixed const & klass);
		float				operator+(Fixed const & klass);
		float				operator-(Fixed const & klass);
		float				operator*(Fixed const & klass);
		float				operator/(Fixed const & klass);
		Fixed &				operator++();
		Fixed				operator++(int);
		static	Fixed & 	min(Fixed & a, Fixed & b);
		static	Fixed const & min(Fixed const & a, Fixed const & b);
		static	Fixed &		max(Fixed & a, Fixed & b);
		static	Fixed const & max(Fixed const & a, Fixed const & b);
};
	std::ostream & operator<<(std::ostream & out, Fixed const & rhs);
#endif