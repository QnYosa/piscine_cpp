#include "DiamondTrap.h"

DiamondTrap::DiamondTrap(/* args */)
{
	std::cout << "DiamondTrap default Constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string & name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap parameter Constructor" << std::endl;
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src):ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "DiamondTrap copy constructor" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor" << std::endl;
}

std::string		DiamondTrap::getName()
{
	return (this->_name);
}

void	DiamondTrap::attack(std::string const & name)
{
	this->ScavTrap::attack(name);
}