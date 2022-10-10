#include "Zombie.hpp"

int main(void)
{
	Zombie	*horde = zombieHorde(SIZE_HORDE, "Josh");
	for (int i = 0; i < SIZE_HORDE; i++)
		horde[i].announce();
	delete[] horde;
	Zombie	*horde2 = zombieHorde(SIZE_HORDE, "James");
	for (int i = 0; i < SIZE_HORDE; i++)
		horde2[i].announce();
	delete[] horde2;
}
