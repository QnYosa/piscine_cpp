#include "HumanB.hpp"

HumanB::HumanB(std::string name) :_name("UnKnown Name")
{
	if (name.empty())
		this->setName("Unknown name");
	else
		this->setName(name);
	this->_weaponB = 0;
	this->_has_Weapon = 0;
	std::cout << this->getName() << " has been created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->getName() << " has been destroyed" << std::endl;
}

void		HumanB::attack(void)
{
	if (this->_has_Weapon)
		std::cout << this->_name << " attack us with the weapon " << this->_weaponB->getType() << std::endl;
	else
		std::cout << "Impossible to attack without weapon" << std::endl;	
}

void		HumanB::setName(std::string name)
{
	this->_name = name;
}

std::string	HumanB::getName(void)
{
	return (this->_name);
}

void		HumanB::setWeapon(Weapon *WeaponB)
{
	this->_weaponB = WeaponB;
	this->_has_Weapon = 1;
}
