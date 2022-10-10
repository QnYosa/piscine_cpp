#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		/* data */
	std::string		_type;
	public:
		AMateria(/* args */);
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		~AMateria();
		AMateria &			operator=(AMateria const & src);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};




#endif