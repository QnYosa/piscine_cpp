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
		~FragTrap();
		FragTrap& operator=(FragTrap const & src);
		void	highFivesGuys(void);
};

#endif