#include "Karen.hpp"



int main(int ac, char **av)
{
	if (ac != 2)
		return (-1);
	std::string bullshit = av[1];
	Karen fKaren;
	fKaren.complain(bullshit);
}