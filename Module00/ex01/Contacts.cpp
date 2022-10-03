#include "main.hpp"
#include	<iostream>

Contacts::Contacts()
{
}

Contacts::~Contacts()
{
}

void Contacts::setFirstname()
{
	this->_firstname = check_getline();
	if (this->_firstname.empty() || is_only_spaces(this->_firstname) < 0)
	{
		std::cout << "Nome do seu amigo" << std::endl;
		this->setFirstname();
	}
}

void Contacts::setLastname()
{
	this->_lastname = check_getline();
	if (this->_lastname.empty() || is_only_spaces(this->_lastname) < 0)
	{
		std::cout << "Apelido do seu amigo" << std::endl;
		this->setLastname();
	}
}

void Contacts::setNickname()
{
	this->_nickname = check_getline();
	if (this->_nickname.empty() || is_only_spaces(this->_nickname) < 0)
	{
		std::cout << "Sobrenome do seu amigo" << std::endl;
		this->setNickname();	
	}
}

void Contacts::setNumber()
{
	this->_number = check_getline();
	if (this->_number.empty() || is_only_spaces(this->_number) < 0)
	{
		std::cout << "Numero ?" << std::endl;
		this->setNumber();	
	}
}

void Contacts::setDarkestSecret()
{
	this->_darkest_secret = check_getline();
	if (this->_darkest_secret.empty() || is_only_spaces(this->_darkest_secret) < 0)
	{
		std::cout << "Darkest Secret ?" << std::endl;
		this->setDarkestSecret();
	}
}

std::string		Contacts::getFirstname(){return (this->_firstname);}
std::string		Contacts::getLastname(){return (this->_lastname);}
std::string		Contacts::getNickname(){return (this->_nickname);}
std::string		Contacts::getNumber(){return (this->_number);}
std::string		Contacts::getDarkestSecret(){return (this->_darkest_secret);}

int				Contacts::returnLength(){return this->_number.length();}

int				is_only_spaces(std::string const & str)
{
	for (int i = 0; i < (int)str.length(); i++)
	{
		if (std::isspace(str[i]))
			i++;
		else
			return (0);
	}
	return (-1);
}