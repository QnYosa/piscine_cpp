#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <stdio.h>
#define	SIZE 4

void	fillChenil(Animal *chenil[])
{
	for (int i = 0; i < SIZE/2; i++)
		chenil[i] = new Dog();
	for (int i = SIZE/2; i < SIZE; i++)
		chenil[i]= new Cat();
}

void	destroyChenil(Animal *chenil[])
{
	for (int i = 0; i < SIZE; i++)
		delete chenil[i];
}

int main()
{
	Animal *Chenil[SIZE];
	fillChenil(Chenil);
	std::cout << "Start" << std::endl;
	for(int i = 0; i < SIZE; i++)
	{

	std::cout << Chenil[i]->getType() << std::endl;
	Chenil[i]->makeSound();
	}
	Brain cerebro;
	cerebro.setIdea("Aller sur Mars");
	cerebro.setIdea("Sortir");
	cerebro.setNIdea(99, "Détruire la Terre");
	cerebro.setIdea("Acheter du sel");
	cerebro.showIdeas();
	Dog cat;
	cat.setIdea("Faire chier");
	cat.setIdea("Faire chier");
	const Animal *ani = &cat;
	Dog eliott = cat;
	eliott.getIdeas();
	ani->getIdeas();
	ani->makeSound();
	destroyChenil(Chenil);
	return 0;
}
