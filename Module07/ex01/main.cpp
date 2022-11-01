#include "iter.hpp"


int main ()
{
	float t[3] = {2.839f, 3.5533f, 239.30f};
	std::string str = "salut bg";
	std::cout << str << std::endl;
	iter(str.c_str(), str.length(), &f);
	iter(t, 3, &f);
}