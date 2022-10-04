#include	"main.hpp"

Phonebook::Phonebook(/* args */)
{
}

Phonebook::~Phonebook()
{
}

int		Phonebook::check_number(std::string number)
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

int		Phonebook::add(int datas[2], int step)
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
			this->tab[index].setFirstname();
			step++;
		}
		if (step == 2)
		{
			std::cout << "Apelido do seu amigo" << std::endl;
			this->tab[index].setLastname();
			step++;
		}
		if (step == 3)	
		{
			std::cout << "Sobrenome do seu amigo" << std::endl;
			this->tab[index].setNickname();
			step++;
		}
		if (step == 4)
		{
			std::cout << "Numero ?" << std::endl;
			this->tab[index].setNumber();
			if (!check_number(this->tab[index].getNumber()))
				step++;
		}
		if (step == 5)
		{
			std::cout  << "Darkest Secret ?" << std::endl;
			this->tab[index].setDarkestSecret();
			step++;
		}
	}
	return (0);
}

void	Phonebook::prompt_search(int index)
{
	std::cout << "Firstname :" << this->tab[index].getFirstname() << std::endl;
	std::cout << "Lastname :" << this->tab[index].getLastname() << std::endl;
	std::cout << "Nickname :" << this->tab[index].getNickname() << std::endl;
	std::cout << "Number :" << this->tab[index].getNumber() << std::endl;
	std::cout << "Darkest Secret :" << this->tab[index].getDarkestSecret() << std::endl;
}

void	Phonebook::prompt_contacts(int datas[2])
{
	std::cout << std::setfill(' ') << std::setw(30) << std::right << "CONTACTS" << std::endl;
	std::cout << std::setfill(' ') << std::setw(10) << "Index" << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << "Firstname" << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << "Lastname" << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << "Nickname" << " | " << std::endl;
	for (int i = 0; i < datas[0]; i++)
	{
		std::cout << std::setfill(' ') << std::setw(10) << i << " | ";
		std::cout << std::setfill(' ') << std::setw(10) << this->tab[i].getFirstname() << " | ";
		std::cout << std::setfill(' ') << std::setw(10) << this->tab[i].getLastname() << " | ";
		std::cout << std::setfill(' ') << std::setw(10) << this->tab[i].getNickname() << " | " << std::endl;
	}
}

void	Phonebook::search(int datas[2])
{
	prompt_contacts(datas);
	if (datas[0] == 0)
		return ;
	std::cout << "Index do contacto" << std::endl;
	std::string s = check_getline();
	while (is_just_number(s) < 0)
		std::string s = check_getline();
	int index = std::atoi(s.c_str());
	if (index == 0)
		this->prompt_search(index);
	printf("index = %d", index);
	std::cout << "Firstname :" << this->tab[index].getFirstname() << std::endl;
	this->prompt_search(index);
}
