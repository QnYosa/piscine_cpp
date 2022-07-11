#include "main.hpp"
#include	<iostream>

Contacts::Contacts()
{
}

Contacts::~Contacts()
{
}

void Contacts::setFirstname(){this->_firstname = check_getline();}
void Contacts::setLastname(){this->_lastname = check_getline();}
void Contacts::setNickname(){this->_nickname = check_getline();}
void Contacts::setNumber(){this->_number = check_getline();}
void Contacts::setDarkestSecret(){this->_darkest_secret = check_getline();}

std::string		Contacts::getFirstname(){return (this->_firstname);}
std::string		Contacts::getLastname(){return (this->_lastname);}
std::string		Contacts::getNickname(){return (this->_nickname);}
std::string		Contacts::getNumber(){return (this->_number);}
std::string		Contacts::getDarkestSecret(){return (this->_darkest_secret);}

int				Contacts::returnLength(){return this->_number.length();}