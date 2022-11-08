#include "Span.hpp"
void	realTests()
{
	Span	sp(10000);

	for (int i = 0; i < sp.getSize(); i++)
		sp.addNumber(i * rand());
	std::cout << sp << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

// int main()
// {
// 	Span 	sp(45);

// 	for (int i = 0; i < sp.getSize() - 1; i++)
// 		sp.addNumber(i * 2);
// 	sp.addNumber(20);
// 	std::cout << sp;
// 	std::cout << "biggest span = " <<sp.longestSpan() << std::endl;
// 	std::cout << "shortest span = " << sp.shortestSpan() << std::endl;
// 	// realTests();
// 	return (0);
// }

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return (0);
}