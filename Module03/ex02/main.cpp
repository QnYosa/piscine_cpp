#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void	test_fragtrap()
{
	std::cout << "\n==================TEST FRAGTRAP =========================\n";

	std::string name = "Droideka";
	std::string n = "yoda";
	FragTrap	droideka(name);
	FragTrap	victim(n);

	std::cout << droideka.getName() << std::endl;
	std::cout << droideka.getHitPoints() << std::endl; 
	std::cout << droideka.getAttackDamage() << std::endl;
	std::cout << droideka.getEnergyPoints() << std::endl;
	droideka.highFivesGuys();
	droideka.attack(n);
}

void test_copy()
{
	std::cout << "\n==================TEST COPY =========================\n";

	std::string		jName = "Yoda";
	std::string		sName = "Palpatine";
	FragTrap		jedi(jName);
	FragTrap		sith(sName);

	std::cout << sith.getName() << std::endl;
	std::cout << sith.getHitPoints() << std::endl; 
	std::cout << sith.getAttackDamage() << std::endl;
	std::cout << sith.getEnergyPoints() << std::endl;
	sith.attack(sName);
	sith = jedi; // un sith infiltre les jedis 
	std::cout << jedi.getName() << std::endl;
	std::cout << jedi.getHitPoints() << std::endl; 
	std::cout << jedi.getAttackDamage() << std::endl;
	std::cout << jedi.getEnergyPoints() << std::endl;
	jedi.attack(sName);
	std::cout << sith.getName() << std::endl;
	std::cout << sith.getHitPoints() << std::endl; 
	std::cout << sith.getAttackDamage() << std::endl;
	std::cout << sith.getEnergyPoints() << std::endl;
	sith.attack(sName);
}

void	test_copy_const()
{
	std::cout << "\n==================TEST COPY CONST =========================\n";
	std::string name = "Droideka";
	FragTrap	droideka(name);
	FragTrap	droid(droideka);

	std::cout << droideka.getName() << std::endl;
	std::cout << droideka.getHitPoints() << std::endl; 
	std::cout << droideka.getAttackDamage() << std::endl;
	std::cout << droideka.getEnergyPoints() << std::endl;
	droideka.highFivesGuys();
	droideka.attack("Random Wookie");
	std::cout << droid.getName() << std::endl;
	std::cout << droid.getHitPoints() << std::endl; 
	std::cout << droid.getAttackDamage() << std::endl;
	std::cout << droid.getEnergyPoints() << std::endl;
	droid.highFivesGuys();
	droid.attack("Random Wookie");	
}

int main(void)
{
	test_fragtrap();
	test_copy();
	test_copy_const();
	return (0);
}