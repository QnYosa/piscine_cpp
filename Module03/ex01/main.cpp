#include "ScavTrap.hpp"

void test_copy()
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
	copycat.attack(""); // pas de segfault
	copycat.guardGate();
}

void test_scavtrap()
{
	std::cout << "\n===================TEST SCAVTRAP=============\n";
	ScavTrap	uno("Uno");
	ScavTrap	enemy("Mechant");

	std::cout << uno.getName() << std::endl;
	std::cout << uno.getHitPoints() << std::endl;
	std::cout << uno.getAttackDamage() << std::endl;
	std::cout << uno.getEnergyPoints() << std::endl;
	uno.attack("Saul");
	uno.guardGate();
}

int main(void)
{
	test_scavtrap();
	test_copy();
	return (0);
}