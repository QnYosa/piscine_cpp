#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Dog d;
	Cat c;
	Animal *Ad = &d;
	Animal *Ac = &c;
	Animal A;
	std::cout << "================ANIMAL SOUND===================\n";
	Ad->makeSound();
	Ac->makeSound();
	A.makeSound();
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "================SHOW YOUR TYPE===================\n";
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "================MAKE YOUR SOUND===================\n";
	i->makeSound(); //will output the cat sound! j->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << "\n==============COPY i = j ====================\n";
	const Animal *ptr = NULL;
	ptr = i;
	i = j;
	std::cout << "================i new sound===============\n";
	i->makeSound(); // operator = fonctionne bien
	delete meta;
	delete j;
	delete ptr;
	i = NULL;
	j = NULL;
	meta = NULL;
	Cat *kitty = new Cat();
	std::cout << "hi kitty" << std::endl;
	kitty->makeSound();
	std::cout << "bye bye kitty" << std::endl;
	delete kitty;
	Dog doggo;
	Cat catho;
	doggo.makeSound();
	catho.makeSound();
	std::cout << "===================WRONG ANIMAL=============\n";
	WrongAnimal wa;
	WrongAnimal *wan = new WrongCat();
	wa.makeSound();
	wan->makeSound();
	std::cout << "======================END===================\n";
	delete wan;
	return 0;
}
