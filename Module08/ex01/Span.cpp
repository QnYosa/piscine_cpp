#include "Span.hpp"

Span::Span() : _v(), _size(5)
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
		throw (Span::TooManyMembers());
	_v.push_back(x);
}

void	Span::addNumbers(unsigned int size)
{
	if (_size < size + _v.size())
		throw (Span::TooManyMembers());
	for(unsigned int i = 0; i < size; i++)
		_v.push_back(rand() % 10000);
}

int		Span::shortestSpan()const
{
	LisT::const_iterator	iter;
	LisT::const_iterator	iter_min;
	Span::LisT		L1st(this->_v);
	L1st.sort();
	int min = 0;
	int	i = 0;
	int result = 0;
	for (iter = L1st.begin(); iter!= L1st.end(); iter++)
	{
		if (i == 1)
			iter_min = L1st.begin();
		if (i != 0)
		{
			result = *iter - *iter_min;
			if (i == 1)
				min = result;
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
		throw(Span::TooFewMembers());
	Span::LisT		L1st(this->_v);
	L1st.sort();
	return (*(L1st.rbegin()) - *(L1st.begin()));
}

void	Span::display()const
{
	LisT::const_iterator	i;
	for (i = _v.begin(); i != _v.end(); i++)
		std::cout << *i << std::endl;
}

int		Span::getSize()const
{
	return (_size);
}

Span::LisT	Span::getV()
{
	return (_v);
}

std::ostream 	& operator<<(std::ostream & out, Span const & src)
{
	src.display();
	out << "size = " <<src.getSize() << std::endl;
	return (out);
}

const char* Span::TooFewMembers::what() const throw()
{
	return ("Too FEW members\n");
}

const char* Span::TooManyMembers::what() const throw()
{
	return ("Too many members\n");
}

Span::LisT::iterator		Span::getBegin()
{
	return (_v.begin());
}

Span::LisT::iterator		Span::getEnd()
{
	return (_v.end());
}