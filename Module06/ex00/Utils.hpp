#ifndef UTILS_HPP
#define UTILS_HPP
#include <iostream>
#include <cstdlib>
#include <ctype.h>
#include <iomanip>
#include <limits>
#include <numbers>
#include <cmath>
#include <limits.h>
class Utils
{
	private:
		std::string	_value;
		double		_double;
	public:
		Utils();
		Utils(char *num);
		~Utils();
		std::string & 	getValue();
		void 			convert_value();
		void			toChar();
		void			toInt();
		void			toFloat();
		void			toDouble();
		void			display();

};
#endif