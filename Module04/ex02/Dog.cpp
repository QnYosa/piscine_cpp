#include "Dog.hpp"

Dog::Dog(/* args */):AAnimal("Dog")
{
	std::cout << "Dog default constructor" << std::endl;
	_attribute = new Brain();
}

Dog::Dog(Dog const & src):AAnimal("Dog")
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
	// delete _attribute;
}

Dog &	Dog::operator=(Dog const & src)
{
	if (this != &src)
	{
		this->setType(src.getType());
		this->_attribute = src._attribute; // checker si meme adresse
	}
	return (*this);
}

void		Dog::makeSound()const
{
	std::cout << "WAF WAF" << std::endl;
}

std::string*		Dog::getAttribute()const
{
	return (this->_attribute->getIdeas());
}

void				Dog::setIdea(std::string const & idea)
{
	this->_attribute->setIdea(idea);
}

void				Dog::getIdeas()const
{
	this->_attribute->showIdeas();
}