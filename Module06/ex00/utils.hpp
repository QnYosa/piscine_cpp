#ifndef UTILS_HPP
#define UTILS_HPP
#include <iostream>
#include <cstdlib>
#include <ctype.h>
#include <iomanip>
#include <limits>
#include <numbers>
#include <cmath>

class Utils
{
	private:
		char	_char;
		int		_int;
		float	_float;
		double	_double;

		bool	_i_over;
		bool	_non_disp;
		bool	_nan;
		bool	_is_inf;
	public:
		Utils();
		Utils(int n);
		Utils(float f);
		Utils(double d);
		Utils(char c);
		~Utils();
		int		getInt()const;
		float	getFloat()const;
		double	getDouble()const;
		char	getChar()const;
		bool	get_i_over()const;
		bool	get_non_disp()const;
		bool	get_nan()const;
		bool	get_is_inf()const;

		void	setInt(int n);
		void	setFloat(float f);
		void	setDouble(double d);
		void	setChar(char c);
		void	set_non_disp(bool f);
};

std::ostream & operator<<(std::ostream & out, Utils const & rhs);

int		is_float(const char *number, int & found);
int		is_double(const char *number, int & found);
int		is_int(std::string const & number, int & found);
int		is_char(std::string const & number, int & found);
void	display_impossible();
#endif