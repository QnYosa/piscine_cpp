#include "Brain.hpp"

Brain::Brain(/* args */)
{
	std::cout << "Brain Default Constructor" << std::endl;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain Copy Constructor" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

Brain &		Brain::operator=(Brain const & src)
{
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = src._ideas[i];
	}
	return (*this);
}