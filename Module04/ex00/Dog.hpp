#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
	/* data */
public:
	Dog(/* args */);
	Dog(Dog const & src);
	Dog & operator=(Dog const & src);
	~Dog();
	void		makeSound()const;
};


#endif