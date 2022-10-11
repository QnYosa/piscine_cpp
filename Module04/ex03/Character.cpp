#include "Character.hpp"

Character::Character(/* args */)
{
	std::cout << "Character default constructor" << std::endl;
}

Character::Character(std::string const & name): _name(name)
{
	std::cout << "Character Parameter constructor" << std::endl;
}

Character::Character(Character const & src)
{
	std::cout << "Character copy constructor" << std::endl;
}

Character::~Character()
{
	std::cout << "Character destructor" << std::endl;
}

Character & Character::operator=(Character const & src)
{
}

void		Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!(this->_inventaire[i]))
			this->_inventaire[i] = m; // on parle ici tableau de pointeur et non pas un tableau sur pointeur
	}
}

void		Character::unequip(int idx)
{
	delete _inventaire[idx];
}

void		Character::use(int idx, ICharacter& target)
{
	
}
