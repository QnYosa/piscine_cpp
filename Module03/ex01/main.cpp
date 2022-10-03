#include "ScavTrap.h"

int main(void)
{
	std::string		jName = "Yoda";
	std::string		sName = "Palpatine";
	ScavTrap		jedi(jName);
	ScavTrap		sith(sName);
	ScavTrap		copycat(jedi);

	std::cout << copycat.getName() << std::endl;
	std::cout << copycat.getHitPoints() << std::endl; 
	std::cout << copycat.getAttackDamage() << std::endl;
	std::cout << copycat.getEnergyPoints() << std::endl;
	
	return (0);
}