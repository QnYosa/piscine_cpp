#include "Character.hpp"

Character::Character(/* args */): ICharacter(), _name("Unknown")
{
	for (int i = 0; i < 4; i++)
		_inventaire[i] = NULL;
	std::cout << "Character default constructor" << std::endl;
}

Character::Character(std::string const & name): ICharacter(), _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventaire[i] = NULL;
	std::cout << "Character Parameter constructor" << std::endl;
}

Character::Character(Character const & src): ICharacter(), _name(src._name)
{
	for (int i = 0; i < 4; i++)
		_inventaire[i] = NULL;
	std::cout << "Character copy constructor" << std::endl;
	*this = src;
}

Character::~Character()
{
	std::cout << "Character destructor" << std::endl;
}

Character & Character::operator=(Character const & src)
{
	if (this != &src)
	{
		this->_name = src._name;
		for (int i = 0; i < 4; i++)
		{
			// if (_inventaire[i] != src._inventaire[i])
			// 	delete [] _inventaire[i]; // buggera car pas d'allocation 
			// _inventaire[i] = src._inventaire[i];
			if (src._inventaire[i]->getType() == "ice")
				_inventaire[i] = new Ice();
			else if (src._inventaire[i]->getType() == "cure")
				_inventaire[i] = new Cure();
		}
	}
	return (*this);
}

void		Character::equip(AMateria* m)
{
	std::cout << "HELLO=========0===" << _inventaire[0] << std::endl;
	std::cout << "HELLO=========1==" << _inventaire[1] << std::endl;
	std::cout << "HELLO=========2==" << _inventaire[2] << std::endl;
	std::cout << "HELLO=========3==" << _inventaire[3] << std::endl;
	if (!m || m->getIsUsed())
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (_inventaire[i] == NULL)
		{
			_inventaire[i]= m; // on parle ici tableau de pointeur et non pas un tableau sur pointeur
			m->setIsUsed(1);
			return ;
		}
	}
}

void		Character::unequip(int idx)
{
	if (idx > 3)
		return ;
	// if (!(*_inventaire) + idx)
	// 	return;
	// std::cout << "TYPE" << (*_inventaire + idx).getType()<< std::endl;
	// std::cout << "HOLA\n" << cpy->getType();
	std::cout << "========UNEQUIP"<< idx  << "=============\n";
	std::cout << "-- Before --" << '\n';
	std::cout << _inventaire[0] << std::endl;
	std::cout << _inventaire[1] << std::endl;
	std::cout << _inventaire[2] << std::endl;
	std::cout << _inventaire[3] << std::endl;
	((_inventaire)[idx])->setIsUsed(0);
	_inventaire[idx] = NULL;
	std::cout << "-- After --" << '\n';
	std::cout << _inventaire[0] << std::endl;
	std::cout << _inventaire[1] << std::endl;
	std::cout << _inventaire[2] << std::endl;
	std::cout << _inventaire[3] << std::endl;

}

void		Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "index invalid " << std::endl;
		return ;
	}
	if (_inventaire[idx])
	{
		// std::cout << "salut je suis " << _inventaire[idx]->getType() << std::endl;
		_inventaire[idx]->use(target);
	// _inventaire[idx]->AMateria::use(target);
	}
	else
		std::cout << "No weapon here" << std::endl;
}

std::string const & Character::getName()const
{
	return (_name);
}