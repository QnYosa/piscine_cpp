#include "Utils.hpp"

Utils::Utils()
{
	std::cout << "Utils default constructor\n";
}

Utils::Utils(char *num): _value(num)
{
	std::cout << "Utils str constructor\n";
	convert_value();
}

Utils::~Utils()
{
	std::cout << "Utils destructor\n";
}

std::string & Utils::getValue()
{
	return (_value);
}

void	Utils::convert_value()
{
	if (getValue().size() == 1)
	{
		char tmp;
		tmp = _value[0];
		_double = static_cast<double>(tmp);
		if (tmp >= '0' && tmp <= '9')
			_double = tmp - 48;
	}
	else
	{
		char *endptr;
		_double = strtod(_value.c_str(), &endptr);
		if (*endptr == 'f')
			endptr++;
		while (*endptr)
		{
			if (!isspace(*endptr))
				throw (std::runtime_error("not convertible"));
			endptr++;
		}
	}
}

void	Utils::toChar()
{
	char c = static_cast<char>(_double);
	if (_double > 31 && _double < 127)
		std::cout << c << std::endl;
	else if (isnan(_double) || isinf(_double))
		std::cout << "Impossible\n";
	else
		std::cout << "Non displayable\n";
}

void	Utils::toInt()
{
	int i = static_cast<int>(_double);
	if (_double > INT_MAX)
		std::cout << "INT MAX\n";
	else if (_double < INT_MIN)
		std::cout << "INT MIN\n";
	else if (isnan(_double) || isinf(_double))
		std::cout << "Impossible\n";
	else
		std::cout << i << std::endl;
}

void	Utils::toFloat()
{
	float f = static_cast<float>(_double);
	std::cout << f << "f" << std::endl;
}

void	Utils::toDouble()
{
	std::cout << _double << std::endl;
}


void	Utils::display()
{
	std::cout << std::fixed << std::setprecision(5);
	this->convert_value();
	std::cout << "char	:	";
	toChar();
	std::cout << "int	:	";
	toInt();
	std::cout << "double	:	";
	toDouble();
	std::cout << "Float	:	:";
	toFloat();
}
