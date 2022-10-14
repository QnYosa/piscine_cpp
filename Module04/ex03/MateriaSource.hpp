#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource
{
	private:
		/* data */
		AMateria*	_stock[4];
	public:
		MateriaSource(/* args */);
		MateriaSource(MateriaSource const & src);
		~MateriaSource();
		MateriaSource &	operator=(MateriaSource const & src);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};



#endif