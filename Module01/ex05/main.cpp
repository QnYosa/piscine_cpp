#include "Harl.hpp"

int main(void)
{
	Harl	fHarl;
	std::string level = "WARNING";
	fHarl.complain(level);
	std::cout << "-------------INFO----------------" << std::endl;
	level = "INFO";
	fHarl.complain(level);
	std::cout << "-------------ERROR----------------" << std::endl;
	level = "ERROR";
	fHarl.complain(level);
	std::cout << "-------------DEBUG----------------" << std::endl;
	level = "DEBUG";
	fHarl.complain(level);
	std::cout << "-------------ELSE----------------" << std::endl;
	level = "";
	fHarl.complain(level);
	return (0);
}