#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat;
	Cat *kitty = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound! j->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	std::cout << "hi kitty" << std::endl;
	kitty->makeSound();
	std::cout << "bye bye kitty" << std::endl;
	delete kitty;
	i = j;
	i->makeSound(); // operator = fonctionne bien
	Dog doggo;
	Cat catho;
	doggo.makeSound();
	catho.makeSound();
	WrongAnimal *wan = new WrongCat();
	wan->makeSound();
	return 0;
}
