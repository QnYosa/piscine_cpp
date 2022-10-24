#include "errors.hpp"

int is_float(std::string const & number, int & found)
{
	int f = 0;
	int dot = 0;
	int minus = 0;
	for (int i = 0; number[i]; i++)
	{
		if (number[i] == '.')
			dot++;
		if (number[i] == 'f')
			f++;
		if (number[i] == '-')
			minus++; 
		if (!isdigit(number[i]) && number[i] != 'f' && number[i] != '.' && number[i] != '-')
			return (-1);
	}
	if (f != 1 || dot != 1 || minus > 1)
		return (-2);
	found = 1;
	return (0);
}

int is_double(std::string const & number, int & found)
{
	int dot = 0;
	int minus = 0;
	for (int i = 0; number[i]; i++)
	{
		if (number[i] == '.')
			dot++;
		if (number[i] == '-')
			minus++;
		if (!isdigit(number[i]) && number[i] != '.' && number[i] != '-')
			return (-1);
	}
	if (dot != 1 || minus > 1)
		return (-2);
	found = 2;
	return (0);
}

int is_int(std::string const & number, int & found)
{
	// long long pour overflow 
	int minus = 0;
	for (int i = 0; number[i]; i++)
	{
		if (number[i] == '-')
			minus++;
		if (!isdigit(number[i]) && number[i] != '-')
			return (-1);
	}
	if (minus > 1)
		return (-2);
	found = 3;
	return (0);
}

int	is_char(std::string const & number, int & found)
{
	if (number.length() != 1)
		return (-1);
	if (found == 0)
		found = 4;
	return (0);
}

void	print_float(float & f)
{
	float to_f = static_cast<float>(f);
	std::cout << "float: " << to_f << "f" << std::endl;

	double to_d = static_cast<double>(f);
	std::cout << "double: " << to_d << std::endl;

	int to_int = static_cast<int>(f);
	std::cout << "int: " << to_int << std::endl;

	char to_c = static_cast<char>(f);
	if (to_c < 31)
		std::cout << "Non displayable\n";
	else 
		std::cout << "char: " << to_c << std::endl;
}

void	print_double(double const & d)
{
	float to_f = static_cast<float>(d);
	std::cout << "float: " << to_f << "f" << std::endl;

	double to_d = static_cast<double>(d);
	std::cout << "double: " << to_d << std::endl;

	int to_int = static_cast<int>(d);
	std::cout << "int: " << to_int << std::endl;

	char to_c = static_cast<char>(d);
	if (to_c < 31)
		std::cout << "Non displayable\n";
	else 
		std::cout << "char: " << to_c << std::endl;
}

void	print_char(char const & c)
{
	float to_f = static_cast<float>(c);
	std::cout << "float: " << to_f << "f" << std::endl;

	double to_d = static_cast<double>(c);
	std::cout << "double: " << to_d << std::endl;

	int to_int = static_cast<int>(c);
	std::cout << "int: " << to_int << std::endl;

	char to_c = static_cast<char>(c);
	if (to_c < 31)
		std::cout << "Non displayable\n";
	else 
		std::cout << "char: " << to_c << std::endl;
}