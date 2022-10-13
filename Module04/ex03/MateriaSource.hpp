#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include "Cure.hpp"
#include "Ice.hpp"

class MateriaSource
{
private:
	/* data */
	AMateria*	_stock[4];
public:
	MateriaSource(/* args */);
	MateriaSource(MateriaSource const & src);
	~MateriaSource();
	MateriaSource &	operator=(MateriaSource const & src);
	// virtual ~IMateriaSource();
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};



#endif