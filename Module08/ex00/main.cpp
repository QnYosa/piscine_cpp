#include "easyfind.hpp"
#include "easyfind.tpp"

int main()
{
	std::vector<int> 	v;
	for (int i = 0; i < 86; i++)
		v.push_back(i);
	int n = 4;
	easyfind(v, n);
	easyfind(v, n +24);
	easyfind(v, n + 87);

	std::list<int>		l;
	for(int i = 0; i < 85; i++)
		l.push_back(i);
	n = 28;
	easyfind(l, n);
	easyfind(l, n + 100);
	easyfind(l, n + 3);

	std::deque<int>		d;

	for (int i = 0; i < 49; i++)
		d.push_back(i);
	n = 39;
	easyfind(d, n);
	easyfind(d, n - 14);
	easyfind(d, n - 18);

	int tab[] = {4, 9, 3};

	// std::array<int>		ar;
	// for (int i = 0; i < 595; i++)
	// 	ar.push_back(i);
	easyfind(tab, n);
	easyfind(tab, n + 63);
	return (0);
}