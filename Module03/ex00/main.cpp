#include "ClapTrap.hpp"
#include <limits>
#include <climits>
void	test()
{
	std::string jediName = "";
	std::string sithName = "";
	ClapTrap jedi(jediName);
	ClapTrap sith(sithName);
	jedi.takeDamage(-5);
	jedi.beRepaired(-3);
	jedi.takeDamage(5);
	jedi.beRepaired(3);
	jedi.takeDamage(2);
	for(int i = 0; i < 10; i++)
		jedi.attack(sithName);
}

int main(void)
{
	test();
	std::cout << "\n===========REAL TESTS================\n";
	std::string jediName = "Obiwan";
	std::string sithName = "Darth Vader";
	ClapTrap jedi(jediName);
	ClapTrap sith(sithName);
	jedi.takeDamage(5);
	jedi.beRepaired(3);
	jedi.takeDamage(2);
	for(int i = 0; i < 10; i++)
		jedi.attack(sithName);
	return (0);
}