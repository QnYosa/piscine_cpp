#ifndef MUTANTSTACK_HPP
#define	MUTANTSTACK_HPP
#include <iostream>
#include <stack>
#include <list>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(){std::cout << "default constructor\n";}
		MutantStack(MutantStack const & src)
		{
			std::cout << "copy constructor\n";
			*this = src;
		}
		virtual ~MutantStack()
		{
			std::cout << "destructor\n";
		}
		typedef typename std::deque<T>::iterator iterator;
		// typedef typename std::deque<T>::rev
		iterator begin()
		{return (this->c.begin());}
		iterator end()
		{return (this->c.end());}
};

#endif