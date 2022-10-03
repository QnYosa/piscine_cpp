#include "ScavTrap.h"

ScavTrap::ScavTrap()
{
	std::cout << "Default Scavtrap Constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap constructor" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & src):ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor" << std::endl;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return (*this);
}

void		ScavTrap::guardGate()
{
	if (this->_energyPoints <= 0)
		std::cout << this->_name << " Is out of energy" << std::endl;
	else if (this->_hitPoints <= 0)
		std::cout << this->_name << " Is dead" << std::endl;
	else
		std::cout << this->_name << " Is now in Gate keeper mode." << std::endl;
}

void		ScavTrap::attack(std::string const & src)
{
	if (_hitPoints <= 0)
	{
		std::cout << _name << " is dead" << std::endl;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << _name << " is out of energy" << std::endl;
	}
	else
	{
		std::cout << _name << " attacks with ScavTrap attack" \
		<< src << ", causing " << getAttackDamage()\
		<< "points of damage" << std::endl \
		<< _name << " lose 1 Energy point" << std::endl;
		lostEnergy();
		displayClaptTrap();
	}	
}
