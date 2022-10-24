#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(/* args */): ClapTrap(), ScavTrap(), FragTrap()
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

std::string		DiamondTrap::getName()const
{
	return (this->_name);
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & src)
{
	if (this != &src)
	{
		_name  = src._name;
		_hitPoints = src._hitPoints;
		_energyPoints = src._energyPoints;
		_attackDamage = src._attackDamage;
	}
	return (*this);
}

void	DiamondTrap::setName(std::string name)
{
	_name = name;
}

void	DiamondTrap::attack(std::string const & name)
{
	this->ScavTrap::attack(name);
}