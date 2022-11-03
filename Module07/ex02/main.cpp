#include "Array.hpp"
#include "Array.tpp"

// int main()
// {
// 	// int *a = new int(4);
// 	// std::cout << a[1] << std::endl;
// 	// delete a;
// 	// return (0);
// 	Array <std::string> l(4);
// 	// l.setN(3,"hello"); // ne marchera pas.
// 	// l.setN(0,"hello"); // fonctionnera. 
// 	l[3] = "Salut";
// 	std::cout << l[0] << std::endl;
// 	std::cout << l[1] << std::endl;
// 	std::cout << l[2] << std::endl;
// 	std::cout << l[3] << std::endl;
// 	// l.displayTab();
// 	try
// 	{
// 		Array <int>int_tab(4);
// 		int_tab [0] = 0;
// 		int_tab [1] = 0;
// 		int_tab [2] = 0;
// 		int_tab [3] = 8;
// 		std::cout << "Hello " << int_tab[0] << std::endl;
// 		std::cout << "Hello " << int_tab[1] << std::endl;
// 		std::cout << "Hello " << int_tab[2] << std::endl;
// 		std::cout << "Hello " << int_tab[3] << std::endl;
// 		// int_tab.displayTab();
// 	}
// 	catch (std::exception & e)
// 	{
// 		// delete [] int_tab
// 		std::cerr << e.what() << "\n";
// 	}
// 	try
// 	{
// 		Array <int>int_tab(4);
// 		int_tab [0] = 0;
// 		int_tab [1] = 0;
// 		int_tab [2] = 0;
// 		int_tab [3] = 8;
// 		Array<int>copy(int_tab);
// 		std::cout << "Hello " << copy[0] << std::endl;
// 		std::cout << "Hello " << copy[1] << std::endl;
// 		std::cout << "Hello " << copy[2] << std::endl;
// 		std::cout << "Hello " << copy[3] << std::endl;
// 		// int_tab.displayTab();
// 	}
// 	catch (std::exception & e)
// 	{
// 		// delete [] int_tab
// 		std::cerr << e.what() << "\n";
// 	}
// 	return 0;
// }

#include <iostream>
// #include <Array.hpp>

#define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

int main( void )
{
	Array <int>My_tab;
    Array <int>My_tab2(10);
	Array <int>My_tab3(10);
	Array<std::string>My_string;
    Array<std::string>My_string2(5);
    Array<std::string>My_string3(5);


	int i;
	My_string2[0] = "Bonjour";
	My_string2[1] = "Comment ça va ?";
	My_string2[2] = "Je m'appelle Adnen";
	My_string2[3] = "J'ai 26 ans";
	My_string2[4] = "J'habite à Paris";

	std::cout << "\033[1;31m===================\033[0m" << std::endl;
    std::cout << "\033[1;33mDEFAULT CONSTRUCTOR\033[0m" << std::endl;
    std::cout << "\033[1;31m===================\033[0m" << std::endl;

	i = -1;
	std::cout << "\033[1;37mUsing Default constructor with int tab : \033[0m" << std::endl;
	while (++i < 10)
	{
		My_tab2[i] = i;
		std::cout << "i = " << i << " tab = " << My_tab2[i] << std::endl;
	}
	i = -1;
	std::cout << std::endl;
	std::cout << "\033[1;37mUsing Default constructor with string tab : \033[0m" << std::endl;

	while (++i < 5)
		std::cout << "i = " << i << " " << My_string2[i] << std::endl;

	std::cout << "\033[1;31m============================\033[0m" << std::endl;
    std::cout << "\033[1;33mUSING = OPERATOR CONSTRUCTOR\033[0m" << std::endl;
    std::cout << "\033[1;31m============================\033[0m" << std::endl;

	My_tab3 = My_tab2;
	My_string3 = My_string2;
	i = -1;
	std::cout << "\033[1;37mUsing Array assignement overload constructor with int tab : \033[0m" << std::endl;
	while (++i < 10)
	{
		My_tab3[i] = i;
		std::cout << "i = " << i << " tab = " << My_tab3[i] << std::endl;
	}
	i = -1;
	std::cout << std::endl;
	std::cout << "\033[1;37mUsing Array assignement overload constructor with string tab : \033[0m" << std::endl;

	while (++i < 5)
		std::cout << "i = " << i << " " << My_string3[i] << std::endl;

	std::cout << "\033[1;31m======================\033[0m" << std::endl;
    std::cout << "\033[1;33mUSING COPY CONSTRUCTOR\033[0m" << std::endl;
    std::cout << "\033[1;31m======================\033[0m" << std::endl;

	Array <int>My_tab4(My_tab3);
	Array <std::string>My_string4(My_string3);
	i = -1;
	std::cout << "\033[1;37mUsing Array copy constructor with int tab : \033[0m" << std::endl;
	while (++i < 10)
	{
		My_tab4[i] = i;
		std::cout << "i = " << i << " tab = " << My_tab4[i] << std::endl;
	}
	i = -1;
	std::cout << std::endl;
	std::cout << "\033[1;37mUsing Array copy constructor with string tab : \033[0m" << std::endl;

	while (++i < 5)
		std::cout << "i = " << i << " " << My_string4[i] << std::endl;

	std::cout << "\033[1;31m===========================================\033[0m" << std::endl;
    std::cout << "\033[1;33mTRYING TO ACCESS FORBIDDEN TAB MEMORY SPACE\033[0m" << std::endl;
    std::cout << "\033[1;31m===========================================\033[0m" << std::endl;
	try
    {
        My_tab2[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	try
    {
        My_tab3[15] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	try
    {
        My_tab4[-14] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	try
    {
        My_string2[45] = "0";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	try
    {
        My_string2[-6] = "0";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        My_string2[-185] = "0";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	std::cout << "\033[1;31m=================\033[0m" << std::endl;
    std::cout << "\033[1;33mCREATING A TAB[0]\033[0m" << std::endl;
    std::cout << "\033[1;31m=================\033[0m" << std::endl;

	try
	{
		Array<std::string>My_string5(0);
		My_string5[0] = "Je crash";
	}
	catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }


	std::cout << "\033[1;31m==================\033[0m" << std::endl;
    std::cout << "\033[1;33mDESTRUCTORS CALLED\033[0m" << std::endl;
    std::cout << "\033[1;31m==================\033[0m" << std::endl;

	return (0);
}