#include "utils.hpp"

Utils::Utils() :  _char(0), _int(0), _float(0), _double(0), _i_over(0), _non_disp(0), _nan(0), _is_inf(0)
{
	std::cout << "Utils default constructor\n";
}

Utils::Utils(char c): _char(c), _int(static_cast<int>(c)), _float(static_cast<float>(c)), _double(static_cast<double>(c)), _i_over(0), _non_disp(0), _nan(0), _is_inf(0)
{
	std::cout << "Utils char constructor\n";
}
Utils::Utils(int n) :  _char(static_cast<char>(n)), _int(n), _float(static_cast<float>(n)), _double(static_cast<double>(n)), _i_over(0), _non_disp(0), _nan(0), _is_inf(0)
{
	std::cout << "Utils int constructor\n";
}
Utils::Utils(float f): _char(static_cast<char>(f)), _int(static_cast<int>(f)), _float(f), _double(static_cast<double>(f)),  _i_over(0), _non_disp(0), _nan(0), _is_inf(0)
{
	std::cout << "Utils float constructor\n";
}
Utils::Utils(double d): _char(static_cast<char>(d)), _int(static_cast<int>(d)), _float(static_cast<float>(d)), _double(d), _i_over(0), _non_disp(0), _nan(0), _is_inf(0)
{
	std::cout << "Utils double constructor\n";
}

Utils::~Utils()
{
	std::cout << "Utils destructor\n";
}

int		Utils::getInt()const
{
	return (_int);
}
float	Utils::getFloat()const
{
	return (_float);
}
double	Utils::getDouble()const
{
	return (_double);
}
char	Utils::getChar()const
{
	return (_char);
}
bool	Utils::get_i_over()const
{
	return (_i_over);
}
bool	Utils::get_non_disp()const
{
	return (_non_disp);
}
bool	Utils::get_nan()const
{
	return (_nan);
}
bool	Utils::get_is_inf()const
{
	return (_is_inf);
}

void	Utils::setInt(int n)
{
	long overflow = static_cast<long>(n);
	if (overflow == 2147483647 || overflow == -2147483648)
		_i_over = true;
	_int = n;
}
void	Utils::setFloat(float f)
{
	_float = f;
}
void	Utils::setDouble(double d)
{
	if (isinf(d) || isnan(d))
	{
		_is_inf = true;
		_nan = true;
	}
	_double = d;
}
void	Utils::setChar(char c)
{
	_char = c;
}

void	Utils::set_non_disp(bool f)
{
	_non_disp = f;
}

std::ostream & operator<<(std::ostream & out, Utils const & rhs)
{
	std::cout << std::fixed << std::setprecision(5);
	if (rhs.get_non_disp())
		out << "char:	non displayable\n";
	else
		out << "char:	" << rhs.getChar() << std::endl;
	if (rhs.get_i_over())
		out << "int:	impossible\n";
	else
		out << "int:	" << rhs.getInt() << std::endl;
	if (rhs.get_nan() || rhs.get_is_inf())
		out << "float:	nanf\n";
	else
		out << "float:	" << rhs.getFloat() << "f\n";
	if (rhs.get_nan() || rhs.get_is_inf())
		out << "double:	nan\n";
	else
		out << "double:	" << rhs.getDouble() << std::endl;
	return (out);
}
