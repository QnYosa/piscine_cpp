#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string & name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap();
		ClapTrap & operator=(ClapTrap const & src);
		std::string	getName();
		int			getHitPoints();
		int			getEnergyPoints();
		int			getAttackDamage();
		void 		attack(const std::string& target);
		void 		takeDamage(unsigned int amount);
		void 		beRepaired(unsigned int amount);
		void		lostEnergy();
		void		lostHitPoints(int damage);
		void		recoverHitPoints(int recover);
		void		displayClaptTrap();
};

#endif