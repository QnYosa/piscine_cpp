#include "iter.hpp"


// int main ()
// {
// 	float t[3] = {2.839f, 3.5533f, 239.30f};
// 	std::string str = "salut bg";
// 	std::cout << str << std::endl;
// 	iter(str.c_str(), str.length(), &f);
// 	iter(t, 3, &f);
// }

void display_tab( const int &i )
{
    std::cout << i << " ";
}

void display_str( const std::string &str )
{
    std::cout << str; 
}

void    ft_putchar(const char &c)
{
   std::cout << c;
}

int main( void )
{
    int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::string str[6];
    char test_2[32] = "Coucou les amis comment ca va ?";


    str[0] = "Coucou ";
    str[1] = "les ";
    str[2] = "amis ";
    str[3] = "ca ";
    str[4] = "va ";
    str[5] = "?";
    std::cout << "\033[1;31m======================================\033[0m" << std::endl;
    std::cout << "\033[1;33mEXPLICIT USE TEMPLATE WITH STD::STRING\033[0m" << std::endl;
    std::cout << "\033[1;31m======================================\033[0m" << std::endl;
    iter<std::string>(str, 6, &display_str);
    std::cout << std::endl;
	std::cout << "\033[1;31m======================================\033[0m" << std::endl;
    std::cout << "\033[1;36mIMPLICIT USE TEMPLATE WITH STD::STRING\033[0m" << std::endl;
    std::cout << "\033[1;31m======================================\033[0m" << std::endl;
    iter(str, 6, &display_str);
    std::cout << std::endl;
    std::cout << "\033[1;31m==================================\033[0m" << std::endl;
    std::cout << "\033[1;33mEXPLICIT USE TEMPLATE WITH INTEGER\033[0m" << std::endl;
    std::cout << "\033[1;31m==================================\033[0m" << std::endl;
    iter<int>(tab, 10, &display_tab);
    std::cout << std::endl;
	std::cout << "\033[1;31m==================================\033[0m" << std::endl;
    std::cout << "\033[1;36mIMPLICIT USE TEMPLATE WITH INTEGER\033[0m" << std::endl;
    std::cout << "\033[1;31m==================================\033[0m" << std::endl;
    iter(tab, 10, &display_tab);
    std::cout << std::endl;
    std::cout << "\033[1;31m================================\033[0m" << std::endl;
    std::cout << "\033[1;33mEXPLICIT USE TEMPLATE WITH CHARS\033[0m" << std::endl;
    std::cout << "\033[1;31m================================\033[0m" << std::endl;
    iter<char>(test_2, 32, &ft_putchar);
    std::cout << std::endl;
    std::cout << "\033[1;31m================================\033[0m" << std::endl;
    std::cout << "\033[1;36mIMPLICIT USE TEMPLATE WITH CHARS\033[0m" << std::endl;
    std::cout << "\033[1;31m================================\033[0m" << std::endl;
    iter(test_2, 32, &ft_putchar);
    std::cout << std::endl;
    return (0);
}