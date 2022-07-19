#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->setName(name);
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void)
{
	std::cout << this->_name << "attack us with the weapon" << this->_weaponB.getType() << std::endl;
}
