#ifndef HUMANB_H
# define HUMANB_H


#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon		_weaponB;
public:
	HumanB(std::string name);
	~HumanB();
	void	attack(void);
	std::string	getName(void);
	void	setName(std::string name);
	Weapon	setWeapon(Weapon WeaponB);
};

#endif