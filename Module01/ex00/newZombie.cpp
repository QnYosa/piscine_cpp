#include "Zombie.hpp"

Zombie*	new_Zombie(std::string name)
{
	Zombie	*dead_rising = new Zombie;

	dead_rising->setName(name);
	return (dead_rising);
}
