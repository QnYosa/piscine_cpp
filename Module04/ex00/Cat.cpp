#include "Cat.hpp"

Cat::Cat(/* args */):Animal("Cat")
{
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(Cat const & src)
{
	std::cout << "Cat copy constructor" << std::endl;
	*this = src;
}


Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

Cat & Cat::operator=(Cat const & src)
{
	if (this != &src)
		this->setType(src.getType());
	return (*this);
}

void		Cat::makeSound()const
{
	std::cout << "MEOW" << std::endl;
}