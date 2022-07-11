#ifndef CONTACTS_H
# define CONTACTS_H

#include <iostream>
#include "main.hpp"
class Contacts
{
private:
	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_number;
	std::string	_darkest_secret;

public:
	Contacts();
	~Contacts();
	int			getFoo(void);
	void		setFoo(int); 
	int			getName(std::string d)const;
	std::string	setName(int step, int index) const ;
	std::string setInfos(int step, int index) const ;
	void 		setFirstname();
	void 		setLastname();
	void 		setNickname();
	void 		setNumber();
	void 		setDarkestSecret();
	std::string	getFirstname(void);
	std::string	getLastname(void);
	std::string	getNickname(void);
	std::string	getNumber(void);
	std::string	getDarkestSecret(void);

	int			returnLength();
};

#endif
