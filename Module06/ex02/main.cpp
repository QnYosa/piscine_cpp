#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main ()
{
	A child1;
	Base *parent = &child1;
	A *child2 = dynamic_cast<A *>(parent);

	if (child2 == NULL)
		std::cout << "Conversion is not okay\n";
	else
		std::cout << "Conversion is Okay\n";
	try
	{
		B&	bclass = dynamic_cast<B &>(*parent);
		// std::cout << bclass << std::endl;
	}
	catch(std::bad_cast &b)
	{
		std::cerr << b.what() << '\n';
	}
	
	return (0);
}