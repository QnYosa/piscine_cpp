#ifndef ZOMBIE_H
# define ZOMBIE_H
# define SIZE_HORDE 4

#include <iostream>
#include <string>

class Zombie
{
	private:
	std::string _name;
	public:
	Zombie();
	~Zombie();
	std::string	getName(void);
	void		setName(std::string name);
	void		announce(void);
};

Zombie*			zombieHorde(int N, std::string name);

#endif 