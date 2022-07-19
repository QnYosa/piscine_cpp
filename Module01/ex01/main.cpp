#include "Zombie.hpp"

int main(void)
{
	Zombie	*horde = zombieHorde(SIZE_HORDE, "josh");
	for (int i = 0; i < SIZE_HORDE; i++)
		horde[i].announce();
	delete[] horde;
}
