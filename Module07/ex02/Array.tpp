#include "Array.hpp"
#include <iostream>

template<typename T>
Array<T>::Array(/* args */):_tab(NULL), _size(0)
{
	std::cout << "Array default constructor\n";
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	if (n > 0)
	{
		_tab = new T[n];
		_size = n;
	}
	else
		throw(ShittyArray());
	std::cout << "Array unsigned int constructor\n";
}

template<typename T>
Array<T>::Array(Array<T> const & src):_tab(new T[src._size]), _size(src._size)
{
	
	std::cout << "Array copy constructor\n";
	*this = src;
}

template<typename T>
Array<T>::~Array()
{
	std::cout << "Array destructor\n";
	if (_size >= 0)
		delete[] _tab;
}

template<typename T>
unsigned int	Array<T>::getSize()
{
	return (_size);
}

template<typename T>
void			Array<T>::displayTab()
{
	for (unsigned int i = 0; i < _size; i++)
		std::cout << _tab[i] << std::endl;
}

template<typename T>
Array<T> const & Array<T>::operator=(Array<T> const & src)
{
	delete [] _tab;
	_tab = new T[src._size];
	for (unsigned int i = 0; i < src._size; i++)
		_tab[i] = src._tab[i];
	_size = src._size;
	return *this;
};

template<typename T>
T &	Array<T>::operator[](unsigned int idx)
{
	if (idx < _size)
		return (_tab[idx]);
	else
		throw (IndexTooHighException());
}

template<typename T>
const char* Array<T>::IndexTooHighException::what() const throw()
{
	return ("Index >= _size\n");
}

template<typename T>
const char* Array<T>::ShittyArray::what() const throw()
{
	return ("Shitty value\n");
}
