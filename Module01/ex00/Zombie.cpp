#include "Zombie.hpp"

Zombie::Zombie(/* args */)
{
	std::cout << "Zombie default constructor" << std::endl;
}

Zombie::Zombie(std::string name):_name(name)
{
	std::cout << "Zombie Parameter Constructor" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie destructor has destroyed " << this->getName() << std::endl;
}

void		Zombie::setName(std::string s)
{
	this->_name = s;
}

std::string	Zombie::getName(void)
{
	return (this->_name);
}

void	Zombie::announce(void)
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

