#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice
{
	private:
		/* data */
		std::string	_type;
	public:
		Ice(/* args */);
		Ice(Ice const & src);
		~Ice();
		Ice &	operator=(Ice const & src);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif