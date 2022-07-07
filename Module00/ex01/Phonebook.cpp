#include	<iostream>
#include 	"Phonebook.hpp"

Phonebook::Phonebook(/* args */)
{
	std::cout << "Classs phonebook criada" << std::endl;
}

Phonebook::~Phonebook()
{
}

void	Phonebook::show_num(Phonebook t)
{
	std::cout << t.num << std::endl;
}
