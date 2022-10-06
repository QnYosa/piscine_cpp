#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class Cat: public Animal
{
	private:
		/* data */
	public:
		Cat(/* args */);
		Cat(Cat const & src);
		Cat & 	operator=(Cat const & src);
		~Cat();
		void		makeSound()const;
};


#endif