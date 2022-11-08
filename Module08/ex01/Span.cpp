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

int		Span::shortestSpan()const
{
	set::iterator	iter;
	set::iterator	iter_min;
	int min;
	int	i = 0;
	int result = 0;
	for (iter = _v.begin(); iter!= _v.end(); iter++)
	{
		if (i == 1)
			iter_min = _v.begin();
		if (i != 0)
		{
			result = *iter - *iter_min;
			// if (result < 2)
			// {
			// 	std::cout << "iter = " << *iter << " && iter - 1 = " << (*iter) - 1 << std::endl;
			// }
			if (result <= min)
				min = result;
			iter_min++;
		}
		i++;
	}
	return (min);
}

int		Span::longestSpan()const
{
	if (_v.size() <= 1)
		throw(std::exception());
	return (*(_v.rbegin()) - *(_v.begin()));
}

void	Span::display()const
{
	set::iterator	i;
	for (i = _v.begin(); i != _v.end(); i++)
		std::cout << *i << std::endl;
}

int		Span::getSize()const
{
	return (_size);
}

std::ostream 	& operator<<(std::ostream & out, Span const & src)
{
	src.display();
	out << "size = " <<src.getSize() << std::endl;
	return (out);
}