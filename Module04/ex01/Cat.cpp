#include "Cat.hpp"

Cat::Cat(/* args */):Animal("Cat")
{
	std::cout << "Cat default constructor" << std::endl;
	_attribute = new Brain();
}

Cat::Cat(Cat const & src)
{
	std::cout << "Cat copy constructor" << std::endl;
	*this = src;
}


Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
	delete[] _attribute;
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

void		Cat::makeSound()const
{
	std::cout << "MEOW" << std::endl;
}