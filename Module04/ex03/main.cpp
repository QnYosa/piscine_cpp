#include <iostream>
#include <string>

int main (void)
{
	std::string *tab[4];
	std::string hello = "Sanlut";
	tab[0] = new std::string("hello");
	tab[1] = &hello;
	std::cout << *tab[0] << std::endl;
	std::cout << *tab[1] << std::endl;
	std::string test = "test";
	std::string *string = *(&tab[0]);
	*string = "";
	// *string = nullptr; //segfault 
	// *(string) = nullptr;
	// std::cout << string << std::endl;
	// tab[0] = &string;
	std::cout << *tab[0] << std::endl;
	// std::cout << *tab[1] << std::endl;
	// delete[] tab[0];
}