#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <iomanip>
#define LOOP(size) for(int i = 0; i < size; i++)

template<typename T>
void	iter(T *tableau, int size, void (*f)(T const & val))
{
	LOOP(size)
		f(tableau[i]);
	std::cout << std::endl;
}

template<typename T>
void	f(T const &val)
{
	std::cout << val <<  std::endl;
}

#endif