#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weaponA)
{
	this->setName(name);
	this->_weaponA = weaponA;
}

HumanA::~HumanA()
{
}

std::string	HumanA::getName(void){return (this->_name);}

void	HumanA::setName(std::string	name){this->_name = name;}

void	HumanA::attack(void)
{
	std::cout << this->_name << "attack us withthei weapon" << this->_weaponA.getType() << std::endl;
}
