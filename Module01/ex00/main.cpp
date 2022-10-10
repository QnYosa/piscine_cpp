#include "Zombie.hpp"

int main(void)
{
	Zombie *z;
	{
		Zombie	z1("Quentin");
		Zombie	*z2 = new_Zombie("Saul le bastardo");
		z2->announce();
		z = &z1;
		z1.announce();
		randomChump("Dimitri");
		delete z2;	
	}
	std::cout << "out of scope" << std::endl;
	z->announce();
}
