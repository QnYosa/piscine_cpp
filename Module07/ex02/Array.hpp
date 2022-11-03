#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <cstring>
#include <cstdlib>
template<typename T>
class Array
{
	private:
		T				*_tab;
		unsigned int	_size;
	public:
		Array(/* args */);
		Array(unsigned int n);
		Array(Array<T> const & src);
		~Array();
		class IndexTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class ShittyArray : public std::exception
		{
			public:
				const char* what() const throw();
		};
		unsigned int	getSize();
		void			displayTab();
		Array<T>const & operator=(Array<T> const & src);
		T			 &	operator[](unsigned int x);
};

#endif