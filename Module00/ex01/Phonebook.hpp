#ifndef	PHONEBOOK_H
# define PHONEBOOK_H

#include "main.hpp"

class Phonebook
{
	private:
		Contacts	tab[8];
	public:
		Phonebook();
		~Phonebook();
		int			add(int datas[2], int step);
		int 		check_number(std::string number);
		void		search(int datas[2]);
		void		prompt_search(int index);
		void		prompt_contacts(int datas[2]);
};

#endif
