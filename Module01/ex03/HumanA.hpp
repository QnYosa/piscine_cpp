#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon&		_weaponA;
public:
	~HumanA();
	HumanA(std::string _name, Weapon &_weaponA);
	void	attack(void);
	std::string	getName(void);
	void	setName(std::string name);
};

#endif