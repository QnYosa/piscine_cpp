#include "DiamondTrap.hpp"

void	test_DiamondTrap()
{
	std::cout << "\n==================TEST DIAMOND TRAP =========================\n";

	std::string name = "Joz";
	std::string n = "Random Marine";
	DiamondTrap	joz(name);
	DiamondTrap	victim(n);

	std::cout << joz.getName() << std::endl;
	std::cout << joz.getHitPoints() << std::endl; 
	std::cout << joz.getAttackDamage() << std::endl;
	std::cout << joz.getEnergyPoints() << std::endl;
	joz.highFivesGuys();
	joz.attack(n);
}

void test_copy()
{
	std::cout << "\n==================TEST COPY =========================\n";

	std::string		jName = "Joz";
	std::string		sName = "Palpatine";
	DiamondTrap		joz(jName);
	DiamondTrap		marine(sName);

	std::cout << marine.getName() << std::endl;
	std::cout << marine.getHitPoints() << std::endl; 
	std::cout << marine.getAttackDamage() << std::endl;
	std::cout << marine.getEnergyPoints() << std::endl;
	marine.attack(sName);
	marine = joz; // un marine infiltre les jozs 
	std::cout << joz.getName() << std::endl;
	std::cout << joz.getHitPoints() << std::endl; 
	std::cout << joz.getAttackDamage() << std::endl;
	std::cout << joz.getEnergyPoints() << std::endl;
	joz.attack(sName);
	std::cout << marine.getName() << std::endl;
	std::cout << marine.getHitPoints() << std::endl; 
	std::cout << marine.getAttackDamage() << std::endl;
	std::cout << marine.getEnergyPoints() << std::endl;
	marine.attack(sName);
}

void	test_copy_const()
{
	std::cout << "\n==================TEST COPY CONST =========================\n";
	std::string name = "Joz";
	DiamondTrap	joz(name);
	DiamondTrap	marine(joz);

	std::cout << joz.getName() << std::endl;
	std::cout << joz.getHitPoints() << std::endl; 
	std::cout << joz.getAttackDamage() << std::endl;
	std::cout << joz.getEnergyPoints() << std::endl;
	joz.highFivesGuys();
	joz.attack("Mihawk");
	std::cout << marine.getName() << std::endl;
	std::cout << marine.getHitPoints() << std::endl; 
	std::cout << marine.getAttackDamage() << std::endl;
	std::cout << marine.getEnergyPoints() << std::endl;
	marine.highFivesGuys();
	marine.attack("Shirohige");	
}

int main(void)
{
	test_DiamondTrap();
	test_copy();
	test_copy_const();
	return (0);
}