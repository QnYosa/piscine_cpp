#ifndef FRAGTRAP_H
# define FRAGTRAP_H
#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
	private:
		/* data */
		FragTrap(/* args */);
	public:
		FragTrap(std::string & name);
		FragTrap(FragTrap const & src);
		~FragTrap();
		FragTrap & operator=(FragTrap const & src);
		void	highFivesGuys(void);
};

#endif