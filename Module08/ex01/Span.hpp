#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
// #include <LisT>
#include <list>
#include <algorithm>

template<class InputIt>
static size_t   ft_distance(InputIt first, InputIt last)
{
	size_t	index;

	for (index = 0; first != last; ++first, ++index);
	return (index);
}

class Span
{
	private:  
		typedef	std::list<int> LisT;
		/* data */
		LisT					_v;
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

		template<class InputIt>
		void			fillSpan(InputIt begin, InputIt end)
		{
			if (ft_distance(begin, end) > this->_size - this->_v.size())
				throw Span::TooManyMembers();
			this->_v.insert(this->getEnd(), begin, end);
		}
		Span	operator=(Span const &src);
		void			addNumber(int x);
		void			addNumbers(unsigned int size);
		int				shortestSpan()const;
		int				longestSpan()const;
		void			display()const;
		int				getSize()const;
		LisT			getV();
		LisT::iterator	getBegin();
		LisT::iterator	getEnd();
		// void	rangeSpan(InputIt start, InputIt end);
};

std::ostream 	& operator<<(std::ostream & out, Span const & src);
#endif