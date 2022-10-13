#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		/* data */
		AMateria*	_inventaire[4];
		std::string _name;
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