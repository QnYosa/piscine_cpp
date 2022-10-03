#ifndef FRAGTRAP_H
# define FRAGTRAP_H
#include "ClapTrap.h"

class FragTrap : virtual public ClapTrap
{
	protected:
		/* data */
		FragTrap(/* args */);
	public:
		FragTrap(std::string & name);
		FragTrap(FragTrap const & src);
		~FragTrap();
		FragTrap& operator=(FragTrap const & src);
		void	highFivesGuys(void);
		virtual void	attack(std::string const & src);
};

#endif