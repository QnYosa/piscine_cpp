#include "Cat.hpp"

Cat::Cat(/* args */):AAnimal("Cat")
{
	std::cout << "Cat default constructor" << std::endl;
	_attribute = new Brain();
}

Cat::Cat(Cat const & src):AAnimal("Cat")
{
	std::cout << "Cat copy constructor" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
	// delete _attribute;
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

std::string*		Cat::getAttribute()const
{
	return (this->_attribute->getIdeas());
}

void				Cat::setIdea(std::string const & idea)
{
	this->_attribute->setIdea(idea);
}

void				Cat::getIdeas()const
{
	this->_attribute->showIdeas();
}