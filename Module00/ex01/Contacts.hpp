#ifndef CONTACTS_H
# define CONTACTS_H
#include	<string>

class Contacts
{
private:
	/* data */
public:
	Contacts();
	~Contacts();

	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	number;
	std::string	darkest_secret;
};

#endif
