#include "Cat.hpp"

Cat::Cat(/* args */):Animal("Cat"), _attribute(new  Brain())
{
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(Cat const & src):Animal("Cat"), _attribute(new  Brain())
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
		delete  _attribute;
		this->_attribute = new Brain(src.getAttribute());
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

void				Cat::getObsession(std::string const & idea)
{
	this->_attribute->obssession(idea);
}

Brain	&			Cat::getAttribute()const
{
	return (*_attribute);
}

