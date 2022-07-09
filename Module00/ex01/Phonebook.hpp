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
		Contacts	tab[8];
		void		show_num(Phonebook t);
		int			add(int datas[2], int step, Phonebook *ph_book);
		int 		check_number(char *number);
		void		search(int datas[2], Phonebook *ph_book);
};

#endif
