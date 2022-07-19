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
		Weapon(std::string type);
		~Weapon();
		std::string& getType(void); // esperluette ? 
		void setType(std::string);

};

#endif