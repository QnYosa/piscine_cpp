#include "Dog.hpp"

Dog::Dog(/* args */):Animal("Dog")
{
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(Dog const & src)
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

Dog &	Dog::operator=(Dog const & src)
{
	if (this != &src)
		this->setType(src.getType());
	return (*this);
}

void		Dog::makeSound()const
{
	std::cout << "WAF WAF" << std::endl;
}