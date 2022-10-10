#include <iostream>
#include <string>

int main (void)
{
	std::string s = "HI THIS IS BRAIN";
	std::string	*ptrS = &s;
	std::string& refS = s;

	std::cout << "address s = " << &s << std::endl;
	std::cout << "address ptrS = " << ptrS << std::endl;
	std::cout << "address refS = " << &refS << std::endl;

	std::cout << "s = " << s << std::endl;
	std::cout << "ptrS = " << *ptrS << std::endl;
	std::cout << "refS = " << refS << std::endl;
}
