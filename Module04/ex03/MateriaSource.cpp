#include "MateriaSource.hpp"

MateriaSource::MateriaSource(/* args */)
{
	std::cout << "MateriaSource default constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		_stock[i] = 0;
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
	std::cout << "MateriaSource destructor" << std::endl;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src)
{
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
			_stock[i] = src._stock[i];
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* to_cpy)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_stock[i])
			_stock[i] = to_cpy;
	}
}