#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class Character : public ICharacter
{
	private:
		/* data */
		std::string _name;
		AMateria*	_inventaire[4];
	public:
		Character(/* args */);
		Character(std::string const & type);
		Character(Character const & src);
		~Character();
		Character & operator=(Character const & src);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);		
};

#endif