#include "Character.hpp"

Character::Character(/* args */): ICharacter(), _name("Unknown")
{
	for (int i = 0; i < 4; i++)
		_inventaire[i] = NULL;
	// *_inventaire = 0;
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
			if (_inventaire[i] != src._inventaire[i])
				delete [] _inventaire[i];
			_inventaire[i] = src._inventaire[i];
		}
	}
	return (*this);
}

void		Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventaire[i] == NULL)
		{
			this->_inventaire[i] = m; // on parle ici tableau de pointeur et non pas un tableau sur pointeur
			return ;
		}
	}
}

void		Character::unequip(int idx)
{
	if (idx > 3)
		return ;
	AMateria*	copy[4];
	for (int i = 0; i < 4; i++)
		if (i != idx)
			copy[i] = _inventaire[i];
	for (int i = 0; i < 4; i++)
		_inventaire[i] = copy[i];
	_inventaire[idx] = NULL;
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
		std::cout << "salut je suis " << _inventaire[idx]->getType() << std::endl;
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