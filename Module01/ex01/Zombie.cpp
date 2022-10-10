#include "Zombie.hpp"

Zombie::Zombie(/* args */)
{
	std::cout << "Zombie constructor" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie destructor" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->getName() << std::endl;
}

void		Zombie::setName(std::string s)
{
	this->_name = s;
}

std::string	Zombie::getName(void)
{
	return (this->_name);
}
