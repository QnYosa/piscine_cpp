#include "DiamondTrap.h"

DiamondTrap::DiamondTrap(/* args */)
{
	std::cout << "DiamondTrap default Constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap parameter Constructor" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src):ScavTrap(src), FragTrap(src)
{
	std::cout << "DiamondTrap copy constructor" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor" << std::endl;
}

