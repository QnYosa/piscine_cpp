#include	<iostream>
#include	"Sample.class.hpp"

Sample::Sample(char p1, int p2, float p3) 
{
	std::cout << "Constructor called" << std::endl;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample::bar(void)
{
	std::cout << "Alguien me llamo ?" << std::endl;
}

int	main(void)
{
	Sample	hola('a', 42, 4.2f);

	hola.bar();
	return (0);
}
