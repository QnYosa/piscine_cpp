#include "Dog.hpp"

Dog::Dog(/* args */):Animal("Dog")
{
	std::cout << "Dog default constructor" << std::endl;
	_attribute = new Brain();
}

Dog::Dog(Dog const & src):Animal("Dog")
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	delete _attribute;
	std::cout << "Dog destructor" << std::endl;
}

Dog &	Dog::operator=(Dog const & src)
{
	if (this != &src)
	{
		this->setType(src.getType());
		this->_attribute = new Brain(src.getAttribute()); // checker si meme adresse
	}
	return (*this);
}

void				Dog::makeSound()const
{
	std::cout << "WAF WAF" << std::endl;
}


void				Dog::setIdea(std::string const & idea)
{
	this->_attribute->setIdea(idea);
}

void				Dog::getIdeas()const
{
	this->_attribute->showIdeas();
}

Brain	&			Dog::getAttribute()const
{
	return (*_attribute);
}