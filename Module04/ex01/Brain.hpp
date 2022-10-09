#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain
{
	private:
		/* data */
		std::string 	_ideas[100];
	public:
		Brain(/* args */);
		Brain(Brain const & src);
		~Brain();
		Brain & 	operator=(Brain const & src);
		void		setIdea(int index);
		void		setNidea(int index);
};

#endif