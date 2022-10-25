#include "utils.hpp"

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
			print_float(f, argv[1]);
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
			int i = atoi(argv[1]);
			print_int(i);
			break;
		}
		case 4:
		{
			char c = argv[1][0];
			print_char(c);
			break;
		}
		default:
			display_impossible();
			break;
	}
}
