#include "easyfind.hpp"

template<typename T>
void	easyfind(T &t, int const & find_)
{
	typename T::iterator i;
	i = find(t.begin(), t.end(), find_);
	if (i != t.end())
		std::cout << "Element found (" << *i << ")\n";
	else
		std::cout << "Element not found\n";
	return ;
}