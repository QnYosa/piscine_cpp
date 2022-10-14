#include "MateriaSource.hpp"

MateriaSource::MateriaSource(/* args */)
{
	for (int i = 0; i < 4; i++)
		_stock[i] = 0;
	std::cout << "MateriaSource default constructor" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	for (int i = 0; i < 4; i++)
		_stock[i] = 0;
	std::cout << "MateriaSource copy constructor" << std::endl;
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_stock[i])
			delete _stock[i];
	}
	std::cout << "MateriaSource destructor" << std::endl;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src)
{
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (src._stock[i]->getType() == "ice")
				_stock[i] = new Ice();
			else if (src._stock[i]->getType() == "cure")
				_stock[i] = new Cure();
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* to_cpy)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_stock[i])
		{
			_stock[i] = to_cpy;
			return ;
		}
	}
}


AMateria*	MateriaSource::createMateria(std::string const & type)
{
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
	else
		return (NULL);
}