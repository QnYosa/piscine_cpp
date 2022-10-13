#include "MateriaSource.hpp"

MateriaSource::MateriaSource(/* args */)
{
	std::cout << "MateriaSource default constructor" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	std::cout << "MateriaSource copy constructor" << std::endl;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor" << std::endl;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src)
{
	if (this != &src)
	{
		// if ()
	}
	return (*this);
}

