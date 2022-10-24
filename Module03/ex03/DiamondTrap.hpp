#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap :public ScavTrap, public FragTrap
{
private:
	std::string	_name;
	/* data */
public:
	DiamondTrap();
	DiamondTrap(std::string & name);
	DiamondTrap(DiamondTrap const & src);
	~DiamondTrap();
	DiamondTrap	&	operator=(DiamondTrap const & src);
	std::string 	getName()const;
	void 			setName(std::string name);
	void			attack(std::string const & name);
};

#endif