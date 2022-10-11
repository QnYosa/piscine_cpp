#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		/* data */
		std::string	_type;
	public:
		Cure(/* args */);
		Cure(Cure const & src);
		~Cure();
		Cure &	operator=(Cure const & src);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};




#endif