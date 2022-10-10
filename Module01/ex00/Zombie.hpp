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
		Zombie(std::string name);
		~Zombie();
		std::string	getName(void);
		void		setName(std::string s);
		void		announce(void);
};

void 	randomChump(std::string name);
Zombie*	new_Zombie(std::string name);

#endif