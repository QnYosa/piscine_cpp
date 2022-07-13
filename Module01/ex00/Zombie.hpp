#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	_name;
	public:
		Zombie(/* args */);
		~Zombie();
		void		announce(void);
		std::string	getName(void);
		void		setName(std::string s);
};

void 	randomChump(std::string name);
Zombie*	new_Zombie(std::string name);

#endif