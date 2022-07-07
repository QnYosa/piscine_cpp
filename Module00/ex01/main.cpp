#include	<iostream>
#include 	"Phonebook.hpp"
#include 	"Contacts.hpp"
#include	<string.h>

void	add(void)
{
	std::cout << "HOLA" << std::endl;
	std::cout << "Como se  chama o seu amigo" << std::endl;
	
	return ;
	//faire appel a la liste d'initialisation
}

void	search(void)
{
	std::cout << "Vai, quem quer chamar pretinho" << std::endl;
}

int 	decrypt_command(char *cmd, Phonebook ph_book, int nb_contacts[2])
{
	if (strcmp(cmd, "ADD") == 0)
	{
		add();
		int	val = (nb_contacts[0] == 8) ? 0 : 1;
		return (val);
	}
	else if (strcmp(cmd, "SEARCH") == 0)
		search();
	else if (strcmp(cmd, "EXIT") == 0)
		exit(0);
	return (0);
}

int	main(int argc, char **argv)
{
	Phonebook	ph_book;
	int			datas[2];

	datas[0] = 0;
	while (1)
	{
		std::cout << "Command ?" << std::endl;
		std::string s;
		std::cin >> s;
		char cmd[s.length() + 1];
		strcpy(cmd, s.c_str());
		datas[0] += decrypt_command(cmd, ph_book, datas);
		std::cout << datas[0] << " nb contact" << std::endl;
	}
	return (0);
}
