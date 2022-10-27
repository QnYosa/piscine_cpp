#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	private:
		/* data */
		bool			_is_used;
	public:
		Cure(/* args */);
		Cure(Cure const & src);
		virtual ~Cure();
		Cure &	operator=(Cure const & src);
		AMateria* clone() const;
		void	use(ICharacter& target);
		int		getIsUsed()const;
		void	setIsUsed(int x);
};

#endif