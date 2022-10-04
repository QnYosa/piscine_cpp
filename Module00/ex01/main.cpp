#include "main.hpp"

std::string check_getline()
{
	std::string s;
	std::getline(std::cin, s);
	if (std::cin.fail())
	{
		printf("FDP\n");
		std::cin.clear();
		std::cin.ignore();
		exit(0);
	}
	return (s);
}

int	is_just_number(std::string s)
{
	for(int i = 0; s.c_str()[i]; i++)
		if (!isdigit(s.c_str()[i]))
			return (-1);
	return (0);
}

int	main(void)
{
	Phonebook	ph_book;
	int			datas[2];

	datas[0] = 0; // 0 = nb contact, 1 = last_contact
	datas[1] = 0;
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
				if (datas[1] == LIMIT) // si c'est le dernier 
					datas[1] = 0;
			}
			if (datas[0] < LIMIT)
				datas[0]++;
		}
		else if (s == "SEARCH")
			ph_book.search(datas);
		else if (s == "EXIT")
			return(0);
	}
	return (0);
}
