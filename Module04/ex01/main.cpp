#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Animal	*fillChenil()
{
	Animal	*chenil;

	chenil = new Animal[100];
	for (int i = 0; i < 50; i++)
	{
		Dog *n = new Dog();
		chenil[i] = *n;
	}
	for (int i = 50; i < 100; i++)
	{
		Cat *n = new Cat();
		chenil[i] = *n;
	}
	return (chenil);
}

void	destroyChenil(Animal *chenil)
{
	delete[] chenil;
}

int main()
{
	Animal *Chenil;
	
	Chenil = fillChenil();
	std::cout << "Start" << std::endl;
	// for(int i = 0; i < 100; i++)
	// 	std::cout << Chenil[i].getType() << std::endl;
	destroyChenil(Chenil);
	return 0;
}
