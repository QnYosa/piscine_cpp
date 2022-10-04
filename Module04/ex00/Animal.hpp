#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>

class Animal
{
	protected:
		void	makeSound();
	private:
		/* data */
		std::string	_type;
	public:
		Animal(/* args */);
		Animal(Animal const & src);
		~Animal();
		Animal &	operator=(Animal const & src);
};

#endif