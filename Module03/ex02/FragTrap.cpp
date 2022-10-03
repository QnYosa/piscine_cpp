#include "FragTrap.h"

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