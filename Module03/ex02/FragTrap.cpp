#include "FragTrap.hpp"

FragTrap::FragTrap(/* args */) : ClapTrap()
{
	std::cout << "FragTrap default Constructor" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src):ClapTrap(src)
{
	std::cout << "FragTrap copy constructor" << std::endl;
	*this = src;
}

FragTrap::FragTrap(std::string & name) :ClapTrap(name)
{
	std::cout << "FragTrap Parameter Constructor" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor" << std::endl;
}


void	FragTrap::highFivesGuys()const 
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
