#include "Span.hpp"

Span::Span()
{
	std::cout << "Span default constructor\n"; 
}

Span::Span(unsigned int size):_v(), _size(size)
{
	std::cout << "Span int constructor\n"; 
}

Span::Span(Span const &src): _size(src._size)
{
	std::cout << "Span copy constructor\n";
	*this = src;
}

Span::~Span()
{
	std::cout << "Span destructor\n"; 
}

Span 	Span::operator=(Span const &src)
{
	if (this != &src)
	{
		_size = src._size;
		_v = src._v;
	}
	return (*this);
}

void	Span::addNumber(int x)
{
	if (_v.size() == _size)
		throw (std::exception());
	_v.insert(x);
}

void	Span::shortestSpan()
{
	// trouver pplus petit ecart entre deux nombres
	set::iterator	i;
	// set::iterator	
	for (i = _v.begin(); i!= _v.end(); i++)
	{

	}
}

int		Span::longestSpan()
{
	if (_v.size() <= 1)
		throw(std::exception());
	return (*(_v.rbegin()) - *(_v.begin()));
}