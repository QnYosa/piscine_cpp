#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name("Unknown"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string & name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap parameter constructor" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src):_name("Unknown"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Copy constructor" << std::endl;
	*this = src;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor" << std::endl;
}

std::string	const & ClapTrap::getName()const
{
	return (_name);
}

int	const &		ClapTrap::getHitPoints()const
{
	return (_hitPoints);
}

int	const &		ClapTrap::getEnergyPoints()const
{
	return(_energyPoints);
}

int			ClapTrap::getAttackDamage()const
{
	return(_attackDamage);
}

void		ClapTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
	{
		std::cout << _name << " is dead" << std::endl;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << _name << " is out of energy" << std::endl;
	}
	else
	{
		std::cout << "Claptrap" << _name << " attacks " << target << ", causing " << getAttackDamage()\
		<< " points of damage" << std::endl;
		std::cout << _name << " lose 1 Energy point" << std::endl;
		lostEnergy();
		displayClapTrap();
	}
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	int is_overflow = amount;
	if (is_overflow < 0)
	{
		std::cout << "Attack too low\n";
		return ;
	}
	if (_hitPoints <= 0)
	{
		std::cout << getName() << "is dead" << std::endl;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << _name << "is out of energy" << std::endl;
	}
	else
	{
		std::cout << _name << " is attacked and lose " \
		<< amount << " Hit Points" << std::endl;
		lostHitPoints(amount);
		displayClapTrap();
	}
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	int is_overflow = amount;
	if (is_overflow < 0)
	{
		std::cout << "Bruv is that shit some poison ?\n";
		return ;	
	}
	if (_hitPoints <= 0)
	{
		std::cout << _name << "is dead" << std::endl;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << _name << "is out of energy" << std::endl;
	}
	else
	{
		std::cout << _name << "use healing artefact, "\
		<< amount << " points are restaured to HitPoints" << std::endl \
		<< _name << "lose 1 Energy point" << std::endl;
		recoverHitPoints(amount);
		lostEnergy();
		displayClapTrap();
	}
}

void		ClapTrap::lostEnergy()
{
	_energyPoints--;
	if (_energyPoints < 0)
		_energyPoints = 0;
}

void		ClapTrap::lostHitPoints(int damage)
{
	_hitPoints -= damage;
	if (_hitPoints < 0)
		_hitPoints = 0;
}

void		ClapTrap::recoverHitPoints(int recover)
{
	for (int i = 0; i < recover; i++)
	{
		if (_hitPoints + i == 2147483647 && i != recover)
		{
			std::cout << "Max limit reached\n";
			return ;
		}
	}
	_hitPoints += recover;
}

void		ClapTrap::displayClapTrap()const
{
	std::cout << _name << std::endl;
	if (_hitPoints > 0)
		std::cout << "Life = " << _hitPoints << std::endl;
	else
		std::cout << _name << " is dead" << std::endl;
	std::cout << "Energy = " << _energyPoints << std::endl;
}
