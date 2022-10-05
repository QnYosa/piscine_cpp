#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>

class Animal
{
	private:
		/* data */
		std::string	_type;
	public:
		Animal(/* args */);
		Animal(Animal const & src);
		Animal(std::string const & type);
		~Animal();
		Animal &	operator=(Animal const & src);
		std::string	getType()const;
		void		makeSound()const;

};

#endif