#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain
{
	private:
		/* data */
		std::string 	_ideas[100];
		int				_last;
	public:
		Brain(/* args */);
		Brain(Brain const & src);
		~Brain();
		Brain & 				operator=(Brain const & src);
		void					obssession(std::string const & obssession);
		void					setIdea(std::string const & idea);
		void					setNIdea(int index, std::string const & idea);
		void					showIdeas();
		std::string				getNidea(int index)const;
		std::string*			getIdeas()const;
};




#endif