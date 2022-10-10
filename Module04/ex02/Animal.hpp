#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>

class AAnimal
{
	protected:
		std::string	_type;
	public:
		AAnimal(/* args */);
		AAnimal(AAnimal const & src);
		AAnimal(std::string const & type);
		virtual ~AAnimal();
		AAnimal &		operator=(AAnimal const & src);
		std::string		getType()const;
		void			setType(std::string const & type);
		virtual void	makeSound()const = 0;
		virtual void 	getIdeas()const;
		virtual void	setIdea(std::string const & idea);
};

#endif