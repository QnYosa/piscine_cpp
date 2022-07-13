#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>
#define SIZE_HORDE 4

class Zombie
{
	private:
	std::string _name;
	public:
	Zombie(/* args */);
	~Zombie();
	std::string	getName(void);
	void		setName(std::string name);
	void		announce(void);
};

Zombie*		zombieHorde(int N, std::string name);

#endif 