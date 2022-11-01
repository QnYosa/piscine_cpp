#include "whatever.hpp"

void	test_max()
{
	std::cout << std::fixed << std::setprecision(6);
	std::cout << ">=======MAX======<\n";
	int a = 45;
	int	b = 56;
	std::cout << max<int>(a, b) << std::endl; // explicit
	b = -8;
	std::cout << max<int>(a, b) << std::endl; // implicit
	a = -8;
	std::cout << max(a, b) << std::endl;
	std::cout << "Float=====>\n";
	float	f = 45.456f;
	float	g = 45.4500009f;
	std::cout << max<float>(f, g) << std::endl; // explicit
	f = -8.56f;
	std::cout << max<float>(f, g) << std::endl; // implicit
	g = -8.56f;
	std::cout << max(f, g) << std::endl;
}

void	test_swap()
{
	int a = 42;
	int b = 84;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	swap<int>(a, b);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "FLOAT=====>\n";
	float f = 42.003f;
	float g = 84.389f;
	std::cout << "f = " << f << std::endl;
	std::cout << "g = " << g << std::endl;
	swap<float>(f, g);
	std::cout << "f = " << f << std::endl;
	std::cout << "g = " << g << std::endl;
}

void	test_min()
{
	std::cout << std::fixed << std::setprecision(6);
	std::cout << ">=======MIN========<\n";
	int a = 45;
	int	b = 56;
	std::cout << min<int>(a, b) << std::endl; // explicit
	b = -8;
	std::cout << min(a, b) << std::endl; // implicit
	a = -8;
	std::cout << min(a, b) << std::endl;
	std::cout << "Float=====>\n";
	float	f = 45.45f;
	float	g = 56.69f;
	std::cout << min<float>(f, g) << std::endl; // explicit
	g = -8.56f;
	std::cout << min(f, g) << std::endl; // implicit
	f = -8.56f;
	std::cout << min(f, g) << std::endl;
}

int main(void)
{
	test_max();
	test_swap();
	test_min();
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return (0);
}
