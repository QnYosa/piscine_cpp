#include "Weapon.hpp"

Weapon::Weapon(std::string s) : _type("Unspecified type of weapon")
{
	this->_type = s;
	std::cout << this->getType() << " has been created" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << this->getType() << " has been destoyed" << std::endl;
}

std::string&	Weapon::getType(void)
{
	std::string&	ret = this->_type;
	return (ret);
}

void	Weapon::setType(std::string type)
{
	if (type.empty())
		this->_type = "Unknown";
	else
		this->_type = type;
}