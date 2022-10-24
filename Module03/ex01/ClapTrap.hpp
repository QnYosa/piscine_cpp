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

	public:
		ClapTrap();
		ClapTrap(std::string & name);
		ClapTrap(ClapTrap const & src);
		virtual ~ClapTrap();
		ClapTrap & operator=(ClapTrap const & src);
		std::string			getName()const; //safe
		int					getHitPoints()const; //safe 
		int					getEnergyPoints()const; // safe
		int					getAttackDamage()const; // safe 
		virtual void 		attack(const std::string& target); //safe 
		void 				takeDamage(unsigned int amount); //safe 
		void 				beRepaired(unsigned int amount); //safe
		void				lostEnergy(); //safe 
		void				lostHitPoints(int damage); //safe 
		void				recoverHitPoints(int recover); //safe
		void				displayClapTrap()const; // safe
};

#endif