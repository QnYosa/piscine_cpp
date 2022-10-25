#include "utils.hpp"

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

void	add_zero_f(std::string const & number)
{
	for(int i = 0; number[i]; i++)
	{
		if (number[i] == 'f' && number[i - 1] == '.')
			std::cout << ".0";
	}
	std::cout << "f\n";
}

void	add_zero_d(std::string const & number)
{
	for(int i = 0; number[i]; i++)
	{
		if (number[i] == '.' && number[i + 1] == 0)
			std::cout << ".0";
	}
}
