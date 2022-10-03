#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap :public ScavTrap, public FragTrap
{
private:
	DiamondTrap(/* args */);
	std::string	_name;
	/* data */
public:
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & src);
	~DiamondTrap();
	DiamondTrap	&	operator=(DiamondTrap const & src);
};





#endif