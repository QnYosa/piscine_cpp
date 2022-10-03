#include	<iostream>
#include 	"Phonebook.hpp"
#include 	"Contacts.hpp"
#include	<string.h>
#include	<string>
#include 	<iomanip>

#define 	LIMIT 2

std::string check_getline()
{
	std::string s;
	std::getline(std::cin, s);
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore();
		exit(0);
	}
	return (s);
}

int	is_just_number(std::string s)
{
	char *string_just_number = NULL;
	string_just_number = strcpy(string_just_number, s.c_str());
	for(int i = 0; string_just_number[i]; i++)
		if (!isdigit(string_just_number[i]))
			return (-1);
	return (0);
}

int	main(void)
{
	Phonebook	ph_book;
	int			datas[2];
	int			first_loop;

	datas[0] = 0; // 0 = nb contact, 1 = last_contact
	datas[1] = 0;
	first_loop = 0;
	while (1)
	{
		std::cout << "Command ?" << std::endl;
		std::string s = check_getline();
		if (s == "ADD")
		{
			ph_book.add(datas, 1);
			if (datas[0] == LIMIT)
			{
				datas[1]++;
				if (datas[1] == LIMIT)
					datas[1] = 0;
			}
			if (datas[0] < LIMIT)
				datas[0]++;
		}
		else if (s == "SEARCH")
			ph_book.search(datas);
		else if (s == "EXIT")
			exit(0);
	}
	return (0);
}
