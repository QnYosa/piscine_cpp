#include "FragTrap.hpp"

FragTrap::FragTrap(/* args */)
{
	std::cout << "FragTrap default Constructor" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src):ClapTrap(src)
{
	std::cout << "FragTrap copy constructor" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor" << std::endl;
}

FragTrap::FragTrap(std::string & name) :ClapTrap(name)
{
	std::cout << "FragTrap Parameter Constructor" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "High Five guys ?" << std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap const & src)
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

void		FragTrap::attack(std::string const & src)
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
		std::cout << _name << " attacks with FragTrap attack " \
		<< src << ", causing " << getAttackDamage()\
		<< " points of damage" << std::endl \
		<< _name << " lose 1 Energy point" << std::endl;
		lostEnergy();
		displayClapTrap();
	}
}
