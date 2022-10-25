#include "utils.hpp"

void	print_float(float & f, std::string const & number)
{
	float to_f = static_cast<float>(f);
	std::cout << "float: " << to_f;
	add_zero_f(number);

	double to_d = static_cast<double>(f);
	std::cout << "double: " << to_d << std::endl;

	int to_int = static_cast<int>(f);
	std::cout << "int: " << to_int << std::endl;

	char to_c = static_cast<char>(f);
	if (to_c < 31)
		std::cout << "Non displayable\n";
	else 
		std::cout << "char: '" << to_c << "'" << std::endl;
}

void	print_double(double const & d)
{
	char to_c = static_cast<char>(d);
	if (to_c < 31)
		std::cout << "Non displayable\n";
	else 
		std::cout << "char:	'" << to_c << "'" << std::endl;

	int to_int = static_cast<int>(d);
	std::cout << "int:	" << to_int << std::endl;

	float to_f = static_cast<float>(d);
	std::cout << "float:	" << to_f << "f" << std::endl;

	double to_d = static_cast<double>(d);
	std::cout << "double:	" << to_d << std::endl;
}

void	print_char(char const & c)
{
	char to_c = static_cast<char>(c);
	if (to_c < 31)
		std::cout << "Non displayable\n";
	else 
		std::cout << "char:	'" << to_c << "'" << std::endl;

	int to_int = static_cast<int>(c);
	std::cout << "int:	" << to_int << std::endl;

	float to_f = static_cast<float>(c);
	std::cout << "float:	" << to_f << ".0f" << std::endl;

	double to_d = static_cast<double>(c);
	std::cout << "double:	" << to_d << ".0" << std::endl;
}

void	print_int(int const & i)
{
	char to_c = static_cast<char>(i);
	if (to_c < 31)
		std::cout << "Non displayable\n";
	else 
		std::cout << "char: '" << to_c << "'" << std::endl;

	int to_int = static_cast<int>(i);
	std::cout << "int: " << to_int << std::endl;

	float to_f = static_cast<float>(i);
	std::cout << "float: " << to_f << ".0f" << std::endl;

	double to_d = static_cast<double>(i);
	std::cout << "double: " << to_d << ".0" << std::endl;
}

void	display_impossible()
{
	std::cout << "char:	impossible\n";
	std::cout << "int:	impossible\n";
	std::cout << "float:	nanf\n";
	std::cout << "double:	nan\n";
}