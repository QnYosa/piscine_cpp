#ifndef HUMANB_H
# define HUMANB_H


#include "Weapon.hpp"

class HumanB
{
	private:
		std::string		_name;
		Weapon			*_weaponB;
		int				_has_Weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void			attack(void);
		std::string		getName(void);
		void			setName(std::string name);
		void			setWeapon(Weapon *WeaponB);
};

#endif