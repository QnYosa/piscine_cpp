#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(5);
		sp.addNumber(5);
		sp.addNumber(5);
		sp.addNumber(5);
		std::cout << sp;
		// sp.addNumber(13);
		std::cout << "shortest span = " <<sp.shortestSpan() << std::endl;
		std::cout << "longest span = " << sp.longestSpan() << std::endl;
	}
	catch (Span::TooManyMembers & e)
	{
		std::cout << e.what();
	}
	catch(Span::TooFewMembers & e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span	sp(5);
		sp.addNumbers(5);
		std::cout << sp;
		Span	sp2(15000);
		// sp.addNumber(10000);
		// std::cout << sp;
		std::cout << "shortest span = " <<sp.shortestSpan() << std::endl;
		std::cout << "longest span = " << sp.longestSpan() << std::endl;
		sp2.fillSpan(sp.getBegin(), sp.getEnd());
		std::cout << "shortest span = " <<sp2.shortestSpan() << std::endl;
		std::cout << "longest span = " << sp2.longestSpan() << std::endl;
		std::cout << sp2;
	}
	catch(Span::TooManyMembers & e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(Span::TooFewMembers & e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span	sp(10000);
		sp.addNumbers(10000);
		// std::cout << sp;
		std::cout << "shortest span = " <<sp.shortestSpan() << std::endl;
		std::cout << "longest span = " << sp.longestSpan() << std::endl;
		sp.addNumber(1); // car un en trop 
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