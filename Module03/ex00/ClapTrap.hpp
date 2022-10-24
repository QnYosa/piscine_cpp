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
		ClapTrap & 				operator=(ClapTrap const & src);
		std::string const & 	getName()const;
		int			const &		getHitPoints()const;
		int			const & 	getEnergyPoints()const;
		int						getAttackDamage()const;
		void 					attack(const std::string& target);
		void 					takeDamage(unsigned int amount); // safe
		void 					beRepaired(unsigned int amount); // safe 
		void					lostEnergy(); //safe
		void					lostHitPoints(int damage); //safe 
		void					recoverHitPoints(int recover); // safe 
		void					displayClapTrap()const;
};

#endif