#include "Karen.hpp"

int main(void)
{
	Karen	fKaren;
	std::string level = "WARNING";
	fKaren.complain(level);
	level = "INFO";
	fKaren.complain(level);
	level = "ERROR";
	fKaren.complain(level);
	level = "DEBUG";
	fKaren.complain(level);
	level = "";
	fKaren.complain(level);
	return (0);
}