#include "utils.hpp"

int is_float(const char *number, int & found)
{
	char *pend = NULL;
	std::string num = number;
	if (num.length() < 2)
		return (-1);
	strtof(number, &pend);
	if (*(pend + 1) != 0)
		return (-1);
	found = 1;
	return (0);
}

int is_double(const char *number, int & found)
{
	char *pend = NULL;
	std::string num = number;
	int dot = 0;
	for (int i = 0; num[i]; i++)
	{
		if (num[i] == '.')
			dot++;
	}
	if (dot == 0)
		return (-1);
	strtod(number, &pend);
	if (*pend != 0)
		return (-1);
	found = 2;
	return (0);
}

int is_int(std::string const & number, int & found)
{
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

void	display_impossible()
{
	std::cout << "char:	impossible\n";
	std::cout << "int:	impossible\n";
	std::cout << "float:	nanf\n";
	std::cout << "double:	nan\n";
}

// void	add_zero_f(std::string const & number)
// {
// 	int dot = 0;
// 	int written = 0;
// 	for(int i = 0; number[i]; i++)
// 	{
// 		if (number[i] == 'f' && number[i - 1] == '.')
// 		{
// 			std::cout << ".0";
// 			written++;
// 		}
// 		if (number[i] == '.')
// 			dot = i;
// 	}
// 	// std::cout << "dot = " << dot << std::endl;
// 	if (written == 0)
// 	{
// 		if (!dot)
// 			std::cout << ".";
// 		for (int i = 0; dot + i < static_cast<int>(number.length()); i++)
// 		{
// 			if (number[dot + i] == '0')
// 				std::cout << number[dot + i];
// 				// std::cout << "";
// 			std::cout <<  *((&number)+(dot + i)) << std::endl;
// 		} 
// 	}
// 	// std::cout << "add= " << (&number)+4 << std::endl;
// 	std::cout << "f\n";
// }

