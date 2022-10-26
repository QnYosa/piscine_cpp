#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	private:
		/* data */
		std::string	_type;
	public:
		WrongAnimal(/* args */);
		WrongAnimal(std::string const & type);
		WrongAnimal(WrongAnimal const & src);
		~WrongAnimal();
		WrongAnimal &	operator=(WrongAnimal const & src);
		std::string		getType()const;
		void			makeSound()const;
};

#endif