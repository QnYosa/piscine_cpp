#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <stdio.h>
#define	SIZE 100

void	fillChenil(AAnimal *chenil[])
{
	for (int i = 0; i < SIZE/2; i++)
	{
		Dog *doggo = new Dog();
		doggo->getObsession("faire un compliment");
		chenil[i] = doggo;
	}
	for (int i = SIZE/2; i < SIZE; i++)
	{
		Cat *kitty = new Cat();
		kitty->getObsession("Changer de chaine");
		chenil[i]= kitty;
	}
}

void	destroyChenil(AAnimal *chenil[])
{
	for (int i = 0; i < SIZE; i++)
		delete chenil[i];
}


void	check_ideas(AAnimal *chenil[])
{
	for (int i = 0; i < SIZE/2; i++)
	{
		Dog *doggo = reinterpret_cast<Dog *>(chenil[i]);
		doggo->getIdeas();
	}
	for (int i = SIZE/2; i < SIZE; i++)
	{
		Cat *kitty = reinterpret_cast<Cat *>(chenil[i]);
		kitty->getIdeas();
	}	
}

int main()
{
	AAnimal *Chenil[SIZE];
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
	cerebro.getIdeas();
	Dog cat;
	cat.setIdea("Faire chier");
	cat.setIdea("Faire chier");
	const AAnimal *ani = &cat;
	// AAnimal cobaye; // ne va pas fonctionner
	// cobaye.getType(); // ne va pas fonctionner 
	Dog eliott = cat;
	eliott.getIdeas();
	ani->getIdeas();
	ani->makeSound();
	destroyChenil(Chenil);
	return 0;
}
