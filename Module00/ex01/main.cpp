#include	<iostream>
#include 	"Phonebook.hpp"
#include 	"Contacts.hpp"
#include	<string.h>
#include	<string>
#include 	<iomanip>
#define 	LIMIT 2

int check_getline(std::string s)
{
	return (s.empty());
}

int	main(int argc, char **argv)
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
		std::string s;
		std::getline(std::cin, s);
		// std::cin >> s;
		// std::cout << s << std::endl;
		// return (0);
		// if (s.empty())
		// 	return (0);
		{
			if (s == "ADD")
			{
				ph_book.add(datas, 1, &ph_book);
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
				ph_book.search(datas, &ph_book);
			else if (s == "EXIT")
				exit(0);
		}
	}
	return (0);
}
