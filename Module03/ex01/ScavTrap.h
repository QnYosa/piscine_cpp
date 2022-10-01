#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include	<iostream>
#include 	<string>
#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(/* args */);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap();
		ScavTrap &	operator=(ScavTrap const & src);
		void		guardGate();
		void		attack(std::string const & src );
};

#endif