#ifndef UTILS_HPP
#define UTILS_HPP
#include <iostream>
#include <cstdlib>
#include <ctype.h>

int		is_float(std::string const & number, int & found);
int		is_double(std::string const & number, int & found);
int		is_int(std::string const & number, int & found);
int		is_char(std::string const & number, int & found);
void	add_zero_f(std::string const & number);

void	print_float(float & f, std::string const & number);
void	print_double(double const & f);
void	print_int(int const & i);
void	print_char(char const & c);
void	display_impossible();

#endif