#include <stdio.h>
#include <iostream>
#include <ctype.h>
#include "errors.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "2 args please\n";
		return (0);
	}
	int found = 0;
	is_int(argv[1], found);
	is_double(argv[1], found);
	is_float(argv[1], found);
	is_char(argv[1], found);
	switch (found)
	{
		case 1:
		{
			char *pend = NULL;
			float f = strtof(argv[1], &pend);
			// std::cout << f << std::endl;
			// std::cout << *pend << std::endl;
			print_float(f);
			// print_int(f);
			// print_double(f);
			// print_char(f);
			// std::cout << "hello float\n";
			/* code */
			break;
		}
		case 2:
		{
			char *pend = NULL;
			double d = strtod(argv[1], &pend);		
			print_double(d);
			break;
		}	
		case 3:
		{
			std::cout << "je suis un int\n";
			break;
		}
		case 4:
		{
			// char = strtod(argv[1], &pend);
			// std::cout << "is a char\n";
			break;
		}
		default:
			std::cout << "can't do shit bruv\n";
			break;
	}
	//strtof
	//strtod
	// atoi
	// int nb = static_cast<int>(argv[1][0]);
	// std::cout << nb << std::endl;
	// tout mettre en nombre sauf si char pas de atoi
	// d'abord checker si c'est un float ou un double.
	// je recois c 
	// je transforme ca en int puis en char puis en double 
	// int a = 42;
	// char c = static_cast <char>(a);
	// float f = static_cast <float>(a);
	// std::cout << a << std::endl;
	// std::cout << c << std::endl;
	// std::cout << f << std::endl;
}