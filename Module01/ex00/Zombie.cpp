#include "Zombie.hpp"


Zombie::Zombie(/* args */)
{
}

Zombie::~Zombie()
{
}

void	Zombie::announce(void)
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void		Zombie::setName(std::string s){this->_name = s;}
std::string	Zombie::getName(void){return (this->_name);}
