#include <iostream>

int main(void)
{
	char buff[512];

	std::cout << "HELLO!";
	std::cout << "buff" << std::endl;
	std::cin >> buff;
	std::cout << "You entered [" << buff << "]" << std::endl;
	return (0);
}