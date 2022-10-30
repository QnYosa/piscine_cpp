#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

Base * generate(void)
{
	std::cout << "============GENERATE=============\n";
	int random = rand() % 3;
	switch (random)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
	}
	return (NULL);
}

void	identify(Base *p)
{
	std::cout << "===========IDENTIFY POINTER=============\n";
	if (dynamic_cast<A *>(p))
		std:: cout << "p is from A class\n";
	if (dynamic_cast<B *>(p))
		std:: cout << "p is from B class\n";
	if (dynamic_cast<C *>(p))
		std:: cout << "p is from C class\n";
}

void	identify(Base& p)
{
	std::cout << "===========IDENTIFY REF=============\n";
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "p is from A class" << std::endl;
		(void)a;
	}
	catch(std::bad_cast &b)
	{
		std::cerr << b.what() << '\n';
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		std::cout << "p is from B class" << std::endl;
		(void)b;
	}
	catch(std::bad_cast &b)
	{
		std::cerr << b.what() << '\n';
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		std::cout << "p is from C class" << std::endl;
		(void)c;
	}
	catch(std::bad_cast &b)
	{
		std::cerr << b.what() << '\n';
	}
}

int main ()
{
	A childA;
	B childB;
	C childC;
	Base *parentA = &childA;
	Base *parentB = &childB;
	Base *parentC = &childC;
	identify(parentA);
	identify(parentB);
	identify(parentC);
	identify(*parentA);
	identify(*parentB);
	identify(*parentC);
	std::cout << "\n\n\n========RANDOM TESTS===========\n";
	Base *parent = NULL;
	for (int i = 0; i < 10; i++)
	{
		if (parent)
			delete parent;
		parent = generate();
		identify(parent);
		identify(*parent);
	}
	delete parent;
	return (0);
}