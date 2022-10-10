#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weaponA) :_name(name), _weaponA(weaponA)
{
	if (name.empty())
		this->setName("John Doe");
	std::cout << this->getName() << " has been created" << std::endl;

}

HumanA::~HumanA()
{
	std::cout << this->getName() << " has been destroyed" << std::endl;
}

std::string	HumanA::getName(void){return (this->_name);}

void	HumanA::setName(std::string	name){this->_name = name;}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attack us with their weapon " << this->_weaponA.getType() << std::endl;
}
