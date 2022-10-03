#include "DiamondTrap.h"

int main(void)
{
	std::string 	njoz = "Joz";
	DiamondTrap		joz(njoz);
	// ScavTrap		clone; proteger les nameless
	std::cout << joz.getName() << std::endl;
	std::cout << joz.getHitPoints() << std::endl;
	return (0);
}