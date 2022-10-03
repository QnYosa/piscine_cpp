#include "ScavTrap.h"
#include "FragTrap.h"

int main(void)
{
	std::string		jName = "Yoda";
	std::string		sName = "Palpatine";
	std::string 	dname = "Droideka";
	ScavTrap		jedi(jName);
	ScavTrap		sith(sName);
	FragTrap		droid(dname);

	std::cout << droid.getName() << std::endl;
	std::cout << droid.getHitPoints() << std::endl; 
	std::cout << droid.getAttackDamage() << std::endl;
	std::cout << droid.getEnergyPoints() << std::endl;
	jedi.attack(jName);
	droid.attack(sName);
	return (0);
}