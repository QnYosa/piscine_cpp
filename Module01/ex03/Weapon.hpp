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
		Weapon(std::string s);
		~Weapon();
		std::string& getType(void);
		void setType(std::string);

};

#endif