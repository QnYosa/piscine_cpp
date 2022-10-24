#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(/* args */);
		FragTrap(std::string & name);
		FragTrap(FragTrap const & src);
		~FragTrap();
		FragTrap& operator=(FragTrap const & src);
		void	highFivesGuys(void);
		virtual void	attack(std::string const & src);
};

#endif