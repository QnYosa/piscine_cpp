#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>
#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string _type;
		/* data */
	public:
		Weapon();
		Weapon(std::string s);
		~Weapon();
		std::string const & getType(void)const;
		void setType(std::string);
};

#endif