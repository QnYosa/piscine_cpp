#include "Brain.hpp"

Brain::Brain(/* args */): _last(0)
{
	std::cout << "Brain Default Constructor" << std::endl;
}

Brain::Brain(Brain const & src): _last(0)
{
	std::cout << "Brain Copy Constructor" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

Brain &			Brain::operator=(Brain const & src)
{
	std::cout << "equal operator" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = src._ideas[i];
	}
	return (*this);
}

void		Brain::obssession(std::string const & obssession)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = obssession;
}

void		Brain::setIdea(std::string const & idea)
{
	if (_last <= 99)
	{
		_ideas[_last] = idea;
		_last++;
	}
	if (_last == 100)
	{
		_last = 0;
		_ideas[_last] = idea;
	}
}

void		Brain::setNIdea(int index, std::string const & idea)
{
	if (index < 0 || index > 99)
		return ;
	_ideas[index] = idea;
	if (index > _last)
		_last = index + 1;
}

void		Brain::showIdeas()
{
	for (int i = 0; i < 100; i++)
		std::cout << _ideas[i] << std::endl;
}

std::string		Brain::getNidea(int index)const
{
	return(this->_ideas[index]);
}

std::string*		Brain::getIdeas()const
{
	return ((std::string *)_ideas);
}

