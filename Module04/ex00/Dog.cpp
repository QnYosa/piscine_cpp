#include "Dog.hpp"

Dog::Dog(/* args */):_type("Dog")
{
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(Dog const & src)
{
	std::cout << "Dog copy constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

Dog &	Dog::operator=(Dog const & src)
{
}