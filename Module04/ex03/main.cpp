#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main (void)
{
	// AMateria 	**floor;
	// floor = NULL;
	// (void)floor;
	// Character 	*main = new Character("Kratos");
	// Character 	*nemico = new Character("Thor");

	// std::cout << "==================TEST ICE====================" << std::endl << std::endl;

	// Ice 		*glace = new Ice();
	// AMateria 	*Aice = glace;
	// Aice->use(*nemico);
	// std::cout << Aice->getType() << std::endl;

	// std::cout << "==================TEST CURE====================" << std::endl << std::endl;
	
	// Cure 		*vaccine = new Cure();
	// Aice = vaccine;
	// Aice->use(*nemico);
	
	// std::cout << "==================TEST AMATERIA====================" << std::endl << std::endl;
	// Cure		*cure = new Cure ();
	// std::cout << cure->getType() << std::endl;
	// AMateria	*Acure = cure;
	// Aice = Acure;
	// Aice->use(*nemico);
	// std::cout << Aice->getType() << "desormais de type cure " << std::endl;
	
	// std::cout << "==================TEST CHARACTER===================" << std::endl << std::endl;
	// Character	*cpy = new Character();
	// std::cout << "Name: " << cpy->getName() << std::endl;
	// // delete cpy;
	// cpy =  NULL;
	// cpy = main;
	// std::cout << "New Name: " << cpy->getName() << std::endl;
	// // std::cout << cpy.getName() << std::endl;
	// main->use(0, *nemico); // test a vide pas de segfault
	// main->use(3, *nemico); // idem
	// main->equip(glace);
	// main->equip(cure);
	// main->use(1, *nemico);
	// main->use(3, *nemico);
	// main->unequip(5); // pas de crash
	// main->unequip(2); // pas de crash alors qu'on a pas d'arme a cet index
	// main->use(3, *nemico);

	// std::cout << "==================TEST MATERIASOURCE===================" << std::endl << std::endl;
	// std::cout << glace->getType() << std::endl;
	// std::cout << main->getName() << std::endl;
	// delete vaccine;
	// delete glace;
	// delete cure;
	// delete main;
	// delete nemico;
	// delete cpy;
	// delete glace;
	// std::string *tab[4];
	// std::string hello = "Sanlut";
	// tab[0] = new std::string("hello");
	// tab[1] = &hello;
	// // std::cout << ;
	// std::cout << tab[0] << std::endl;
	// std::cout << tab[1] << std::endl;
	// std::string test = "test";
	// std::string *string = *(&tab[0]);
	// *string = "";
	// *string = nullptr; //segfault 
	// *(string) = nullptr;
	// std::cout << string << std::endl;
	// tab[0] = &string;
	// std::cout << *tab[0] << std::endl;
	// std::cout << *tab[1] << std::endl;
	// delete[] tab[0];

	std::cout << "==================MAIN CORRECTION=====================" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}