#ifndef	PHONEBOOK_H
# define PHONEBOOK_H

#include "Contacts.hpp"

class Phonebook
{
	private:
		/* data */
		int num = 42;
	public:
		Phonebook(/* args */);
		~Phonebook();
		Contacts tab[8];
		void	show_num(Phonebook t);
};



#endif
