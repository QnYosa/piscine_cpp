#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return (-1);
	std::string bullshit = av[1];
	Harl fHarl;
	fHarl.complain(bullshit);
}