#include "Span.hpp"
void	realTests()
{
	Span	sp(10000);
	std::cout << "hello\n";
	std::multiset<int>::iterator i;
	// int ix = 0;
	for(i = sp.start(); i != sp.final(); i++)
	{
		// ix++;
		// std::cout<< "ix = " << ix << std::endl;
		sp.addNumber(rand() % 10000);
	}
	std::cout << sp << std::endl;
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
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
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		// sp.addNumber(13);
		std::cout << "shortest span = " <<sp.shortestSpan() << std::endl;
		std::cout << "longest span = " << sp.longestSpan() << std::endl;
		std::cout << sp;
	}
	catch (Span::TooManyMembers & e)
	{
		std::cout << e.what();
	}
	try
	{
		realTests();
	}
	catch(Span::TooManyMembers & e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(Span::TooFewMembers & e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}