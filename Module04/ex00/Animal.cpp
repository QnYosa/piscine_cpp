#include "Animal.hpp"

Animal::Animal(/* args */):_type("Stupid Animal")
{
	std::cout << "Cat default constructor" << std::endl;
}


Animal::Animal(Animal const & src)
{
	std::cout << "Cat copy constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destuctor" << std::endl;
}

Animal & 	Animal::operator=(Animal const & src)
{
}
