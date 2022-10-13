#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main (void)
{
	AMateria 	**floor;
	floor = NULL;
	(void)floor;
	Character 	main("Kratos");
	Character 	nemico("Thor");

	std::cout << "==================TEST ICE====================" << std::endl << std::endl;
	Ice 		glace;
	AMateria 	*Aice = &glace;
	Aice->use(nemico);

	std::cout << "==================TEST CURE====================" << std::endl << std::endl;
	Cure 		vaccine;
	Aice = &vaccine;
	Aice->use(nemico);
	std::cout << "==================TEST CHARACTER===================" << std::endl << std::endl;
	Character	cpy;
	std::cout << cpy.getName() << std::endl;
	cpy = main;
	// std::cout << cpy.getName() << std::endl;
	// main.use(0, nemico); // test a vide pas de segfault
	// main.use(3, nemico); // idem
	// main.equip(&glace);
	// main.equip(&glace);
	// main.use(3, nemico);
	std::cout << "==================TEST MATERIASOURCE===================" << std::endl << std::endl;
	std::cout << glace.getType() << std::endl;
	std::cout << main.getName() << std::endl;
	std::string *tab[4];
	std::string hello = "Sanlut";
	tab[0] = new std::string("hello");
	tab[1] = &hello;
	// std::cout << ;
	std::cout << tab[0] << std::endl;
	std::cout << tab[1] << std::endl;
	std::string test = "test";
	std::string *string = *(&tab[0]);
	*string = "";
	// *string = nullptr; //segfault 
	// *(string) = nullptr;
	// std::cout << string << std::endl;
	// tab[0] = &string;
	std::cout << *tab[0] << std::endl;
	// std::cout << *tab[1] << std::endl;
	// delete[] tab[0];
}