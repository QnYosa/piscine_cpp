#include "Utils.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "2 args please\n";
		return (0);
	}
	try
	{
		Utils u(argv[1]);
		u.display();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
