#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <set>
#include <algorithm>

class Span
{
	private:  
		typedef	std::multiset<int> set;                         
		/* data */
		set					_v;
		unsigned int		_size;
	public:
		Span();
		Span(unsigned int size);
		Span(Span const &src);
		~Span();
		Span	operator=(Span const &src);
		void	addNumber(int x);
		void	shortestSpan();
		int		longestSpan();
};

#endif