#include "Weapon.hpp"


Weapon::Weapon(std::string s)
{

}

Weapon::~Weapon()
{
}

std::string&	Weapon::getType(void)
{
	std::string&	ret = this->_type;
	return (ret);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}