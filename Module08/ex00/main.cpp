#include "easyfind.hpp"

int main()
{
	std::vector<int> ar;
	for (int i = 0; i < 5; i++)
		ar.push_back(i);
	std::vector<int>::iterator	i;
	int n = 4;
	for (i = ar.begin(); i != ar.end(); i++)
	{
		if (*i == n)
			std::cout << "we found " << *i << std::endl;
	}
	return (0);
}