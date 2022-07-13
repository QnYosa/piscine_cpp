#include "Zombie.hpp"

Zombie::Zombie(/* args */)
{
}

Zombie::~Zombie()
{
}

void	Zombie::announce(void)
{
	std::cout << this->getName() << std::endl;
}