#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
		ClapTrap();

	public:
		ClapTrap(std::string & name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap();
		ClapTrap & operator=(ClapTrap const & src);
		std::string	getName()const;
		int			getHitPoints()const;
		int			getEnergyPoints()const;
		int			getAttackDamage()const;
		void 		attack(const std::string& target);
		void 		takeDamage(unsigned int amount);
		void 		beRepaired(unsigned int amount);
		void		lostEnergy();
		void		lostHitPoints(int damage);
		void		recoverHitPoints(int recover);
		void		displayClapTrap()const; //safe
};

#endif