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
			Utils u(f);
			u.setChar(static_cast<char>(f));
			u.setInt(static_cast<int>(f));
			u.setDouble(static_cast<double>(f));
			std::cout << u;
			std::cout << "Nani\n";
			break;
		}
		case 2:
		{
			char *pend = NULL;
			double d = strtod(argv[1], &pend);
			Utils u(d);
			u.setChar(static_cast<char>(d));
			u.setInt(static_cast<int>(d));
			u.setFloat(static_cast<float>(d));
			std::cout << u;
			break;
		}	
		case 3:
		{
			int i = atoi(argv[1]);
			Utils u(i);
			if (i < 32 || i > 126)
				u.set_non_disp(true);
			u.setChar(static_cast<char>(i));
			u.setDouble(static_cast<double>(i));
			u.setFloat(static_cast<float>(i));
			std::cout << u;
			break;
		}
		case 4:
		{
			char c = argv[1][0];
			Utils u(c);
			u.setInt(static_cast<int>(c));
			u.setDouble(static_cast<double>(c));
			u.setFloat(static_cast<float>(c));
			std::cout << u;
			break;
		}
		default:
			display_impossible();
			break;
	}
}
