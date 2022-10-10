#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		/* data */
		Brain	*_attribute;
	public:
		Cat(/* args */);
		Cat(Cat const & src);
		Cat & 						operator=(Cat const & src);
		~Cat();
		void						makeSound()const;
		void						getIdeas()const;
		void						setIdea(std::string const & idea);
		Brain &						getAttribute()const;

};


#endif