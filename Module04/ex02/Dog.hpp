#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		/* data */
		Brain	*_attribute;

	public:
		Dog(/* args */);
		Dog(Dog const & src);
		Dog & operator=(Dog const & src);
		~Dog();
		void						makeSound()const;
		void						getIdeas()const;
		void						setIdea(std::string const & idea);
		Brain	&					getAttribute()const;
		void						getObsession(std::string const & idea);
};


#endif