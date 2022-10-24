// #pragma once
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include	<iostream>
#include 	<string>
#include 	"ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(/* args */);
		ScavTrap(std::string & name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap();
		ScavTrap &	operator=(ScavTrap const & src);
		void		guardGate()const;
		void		attack(std::string const & src );
};

#endif