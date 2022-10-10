#include "Weapon.hpp"

Weapon::Weapon():_type("Unknown")
{
	std::cout << "Weapon default constructor" << std::endl;
}

Weapon::Weapon(std::string s) : _type(s)
{
	std::cout << this->getType() << " has been created" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << this->getType() << " has been destroyed" << std::endl;
}

std::string const &	Weapon::getType(void)const
{
	return (_type);
}

void	Weapon::setType(std::string type)
{
	if (type.empty())
		this->_type = "Unknown";
	else
		this->_type = type;
}