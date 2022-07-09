#include	<iostream>
#include 	"Phonebook.hpp"
#include	<string>
#include	<string.h>
#include 	<iomanip>
# define	LIMIT 2

Phonebook::Phonebook(/* args */)
{
}

Phonebook::~Phonebook()
{
}

void	Phonebook::show_num(Phonebook t)
{
	std::cout << t.num << std::endl;
}

int		Phonebook::check_number(char *number)
{
	for(int i = 0; number[i]; i++)
	{
		if (i == 0)
			if (!isdigit(number[i]) && number[i] != '+')
				return (-1);
		if (!isdigit(number[i]))
			return (-1);
	}
	return (0);
}

int		Phonebook::add(int datas[2], int step, Phonebook *ph_book)
{
	int	index;

	index = datas[1];
	if (datas[0] < LIMIT)
		index = datas[0];
	while (step < 5)
	{
		if (step == 1)
		{
			std::cout << "Nome do seu amigo" << std::endl;
			std::cin >> ph_book->tab[index].firstname;
			step++;
		}
		if (step == 2)
		{
			std::cout << "Apelido do seu amigo" << std::endl;
			std::cin >> ph_book->tab[index].lastname;
			step++;
		}
		if (step == 3)	
		{
			std::cout << "Sobrenome do seu amigo" << std::endl;
			std::cin >> ph_book->tab[index].nickname;
			step++;
		}
		if (step == 4)
		{
			std::cout << "Numero ?" << std::endl;
			std::cin >> ph_book->tab[index].number;
			char number[ph_book->tab[index].number.length() + 1];
			strcpy(number, ph_book->tab[index].number.c_str());
			if (!check_number(number))
				step++;
		}
		if (step == 5)
		{
			std::cout  << "Darkest Secret ?" << std::endl;
			std::cin >> ph_book->tab[index].darkest_secret;
			step++;
		}
	}
	return (0);
}

void	Phonebook::search(int datas[2], Phonebook *ph_book)
{
	std::cout << std::setfill(' ') << std::setw(30) << std::right << "CONTACTS" << std::endl;
	std::cout << std::setfill(' ') << std::setw(10) << "Index" << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << "Firstname" << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << "Lastname" << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << "Nickname" << " | " << std::endl;
	for (int i = 0; i < datas[0]; i++)
	{
		std::cout << std::setfill(' ') << std::setw(10) << i << " | ";
		std::cout << std::setfill(' ') << std::setw(10) << ph_book->tab[i].firstname << " | ";
		std::cout << std::setfill(' ') << std::setw(10) << ph_book->tab[i].lastname << " | ";
		std::cout << std::setfill(' ') << std::setw(10) << ph_book->tab[i].nickname << " | " << std::endl;
	}
	if (datas[0] == 0)
		return ;
	std::cout << "Index do contacto" << std::endl;
	std::string s;
	std::cin >> s; //NE MATCHE PAS AVEC UN INT 
	int index = std::stoi(s, nullptr, 10);
	// error messages if letters ou numero superieur a 7
	for(int i = 0; i < index; i++)
	{
		if (i == index)
		{
			std::cout << "Firstname :" << ph_book->tab[index].firstname << std::endl;
			std::cout << "Lastname :" << ph_book->tab[index].lastname << std::endl;
			std::cout << "Nickname :" << ph_book->tab[index].nickname << std::endl;
			std::cout << "Number :" << ph_book->tab[index].number << std::endl;
			std::cout << "Darkest Secret :" << ph_book->tab[index].darkest_secret << std::endl;
		}
	}
}