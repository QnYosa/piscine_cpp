#include "Dog.hpp"

Dog::Dog(/* args */):AAnimal("Dog"), _attribute(new Brain())
{
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(Dog const & src):AAnimal("Dog"), _attribute(new Brain())
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
		delete _attribute;
		this->_attribute = new Brain(src.getAttribute()); // checker si meme adresse
	}
	return (*this);
}

void		Dog::makeSound()const
{
	std::cout << "WAF WAF" << std::endl;
}

Brain	&			Dog::getAttribute()const
{
	return (*_attribute);
}

// std::string*		Dog::getAttribute()const
// {
// 	return (this->_attribute->getIdeas());
// }

void				Dog::setIdea(std::string const & idea)
{
	this->_attribute->setIdea(idea);
}

void				Dog::getIdeas()const
{
	this->_attribute->showIdeas();
}

void				Dog::getObsession(std::string const & idea)
{
	this->_attribute->obssession(idea);
}
