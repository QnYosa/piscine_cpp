#include	<iostream>
#include 	"Phonebook.hpp"
#include 	"Contacts.hpp"
#include	<string.h>
#include	<string>
#include 	<iomanip>

int check_number(char *number)
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

int	add(int datas[2], int step, Phonebook *ph_book)
{
	while (step < 5)
	{
		if (step == 1)
		{
			std::cout << "Nome do seu amigo" << std::endl;
			std::cin >> ph_book->tab[0].firstname;
			std::cout << ph_book->tab[0].firstname << std::endl;
			step++;
		}
		if (step == 2)
		{
			std::cout << "Apelido do seu amigo" << std::endl;
			std::cin >> ph_book->tab[0].lastname;
			step++;
		}
		if (step == 3)	
		{
			std::cout << "Sobrenome do seu amigo" << std::endl;
			std::cin >> ph_book->tab[0].nickname;
			step++;
		}
		if (step == 4)
		{
			std::cout << "Numero ?" << std::endl;
			std::cin >> ph_book->tab[0].number;
			char number[ph_book->tab[0].number.length() + 1];
			strcpy(number, ph_book->tab[0].number.c_str());
			if (!check_number(number))
				step++;
		}
		if (step == 5)
		{
			std::cout  << "Darkest Secret ?" << std::endl;
			std::cin >> ph_book->tab[0].darkest_secret;
			step++;
		}
	}
	return (0);
}

void	search(int datas[2], Phonebook *ph_book)
{
	for (int i = 0; i < datas[0]; i++)
	{
		std::cout << ph_book->tab[i].firstname \
		<< ph_book->tab[i].lastname << \
		ph_book->tab[i].nickname << \
		ph_book->tab[i].number << \
		ph_book->tab[i].darkest_secret << std::endl;
		// std::cout << "Vai, quem quer chamar pretinho\n" << std::right;
		// std::cout << std::setw(10) << "SALUT" << std::left << std::endl;
		// std::cout << std::setw(10) << "SALUT"  << std::endl;
		// std::cout << std::setw(10) << "qui recherchez vous" << std::endl;
	}
	// for (int i = 0; i < )
}

int 	decrypt_command(char *cmd, Phonebook *ph_book, int nb_contacts[2])
{
	if (strcmp(cmd, "ADD") == 0)
	{
		add(nb_contacts, 1, ph_book);
		if (nb_contacts[0] + 1 == 9)
		{
			nb_contacts[1]++;
			if (nb_contacts[1] == 9)
				nb_contacts = 0;
		}
		std::cout << ph_book->tab[0].firstname << std::endl;
		int	val = (nb_contacts[0] == 8) ? 0 : 1;
		return (val);
	}
	else if (strcmp(cmd, "SEARCH") == 0)
		search(nb_contacts, ph_book);
	else if (strcmp(cmd, "EXIT") == 0)
		exit(0);
	return (0);
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
		std::cin >> s;
		char cmd[s.length() + 1];
		strcpy(cmd, s.c_str());
		datas[0] += decrypt_command(cmd, &ph_book, datas);
	}
	return (0);
}
