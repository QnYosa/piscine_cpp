#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"


int main (void)
{
	AMateria 	**floor;
	floor = NULL;
	(void)floor;
	Character 	*main = new Character("Kratos");
	Character 	*nemico = new Character("Thor");

	std::cout << "==================TEST ICE====================" << std::endl << std::endl;

	Ice 		*glace = new Ice();
	AMateria 	*Aice = glace;
	Aice->use(*nemico);
	std::cout << Aice->getType() << std::endl;

	std::cout << "==================TEST CURE====================" << std::endl << std::endl;
	
	Cure 		*vaccine = new Cure();
	Aice = vaccine;
	Aice->use(*nemico);
	
	std::cout << "==================TEST AMATERIA====================" << std::endl << std::endl;
	Cure		*cure = new Cure ();
	std::cout << cure->getType() << std::endl;
	AMateria	*Acure = cure;
	Aice = Acure;
	Aice->use(*nemico);
	std::cout << Aice->getType() << " desormais de type cure " << std::endl;
	
	std::cout << "==================TEST CHARACTER===================" << std::endl << std::endl;
	Character	*cpy = new Character();
	std::cout << "Name: " << cpy->getName() << std::endl;
	delete cpy;
	cpy = main;
	std::cout << "New Name: " << cpy->getName() << std::endl;
	main->use(-1, *nemico); // test valeur impossible INDEX INVALID
	main->use(0, *nemico); // test a vide pas de segfault
	main->use(3, *nemico); // idem
	main->use(8, *nemico); // test a vide pas de segfault
	main->equip(glace);
	main->equip(cure);
	main->equip(vaccine);
	main->use(1, *nemico);
	main->use(3, *nemico);
	main->use(0, *nemico);
	main->use(4, *nemico);
	main->unequip(5); // pas de crash
	main->unequip(2); // pas de crash alors qu'on a pas d'arme a cet index
	main->unequip(0); // on perd l'arme:  gestion du floor
	std::cout << "================LAST ATTACKS==============\n";
	main->use(0, *nemico);
	main->use(3, *nemico);
	delete main;
	delete glace;
	delete cure;
	delete nemico;
	delete vaccine;
	std::cout << "==================MAIN CORRECTION=====================" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	AMateria *tmp2;
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(0);
	delete bob;
	delete me;
	delete src;
	delete tmp;
	delete tmp2;
	return 0;
}