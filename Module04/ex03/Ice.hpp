#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	private:
		/* data */
		bool			_is_used;
	public:
		Ice(/* args */);
		Ice(Ice const & src);
		~Ice();
		Ice &	operator=(Ice const & src);
		AMateria* clone() const;
		void	use(ICharacter& target);
		int		getIsUsed()const;
		void	setIsUsed(int x);
};

#endif