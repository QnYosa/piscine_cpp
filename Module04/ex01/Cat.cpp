#include "Cat.hpp"

Cat::Cat(/* args */):Animal("Cat")
{
	std::cout << "Cat default constructor" << std::endl;
	_attribute = new Brain();
}

Cat::Cat(Cat const & src):Animal("Cat")
{
	std::cout << "Cat copy constructor" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	delete _attribute;
	std::cout << "Cat destructor" << std::endl;
}

Cat & Cat::operator=(Cat const & src)
{
	if (this != &src)
	{
		this->setType(src.getType());
		this->_attribute = src._attribute;
	}
	return (*this);
}

void				Cat::makeSound()const
{
	std::cout << "MEOW" << std::endl;
}

void				Cat::setIdea(std::string const & idea)
{
	this->_attribute->setIdea(idea);
}

void				Cat::getIdeas()const
{
	this->_attribute->showIdeas();
}

Brain	&			Cat::getAttribute()const
{
	return (*_attribute);
}