#include "Cat.hpp"

Cat::Cat(/* args */):_type("Cat")
{
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(Cat const & src)
{
	std::cout << "Cat copy constructor" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

Cat & Cat::operator=(Cat const & src)
{
}