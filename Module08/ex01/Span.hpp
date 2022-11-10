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
		class TooFewMembers : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class TooManyMembers : public std::exception
		{
			public:
				const char* what() const throw();
		};
		Span	operator=(Span const &src);
		void	addNumber(int x);
		int		shortestSpan()const;
		int		longestSpan()const;
		void	display()const;
		int		getSize()const;
		set::iterator start();
		set::iterator final();
		void	rangeSpan(int value, int times);
};

std::ostream 	& operator<<(std::ostream & out, Span const & src);
#endif