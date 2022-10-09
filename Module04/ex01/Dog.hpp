#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		/* data */
		Brain	*_attribute;

	public:
		Dog(/* args */);
		Dog(Dog const & src);
		Dog & operator=(Dog const & src);
		~Dog();
		virtual void						makeSound()const;
		std::string*				getAttribute()const;
		virtual void						getIdeas()const;
		virtual void						setIdea(std::string const & idea);
};


#endif