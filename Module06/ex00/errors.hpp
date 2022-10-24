#ifndef ERRORS_HPP
#define ERRORS_HPP
#include <iostream>
#include <cstdlib>

int		is_float(std::string const & number, int & found);
int		is_double(std::string const & number, int & found);
int		is_int(std::string const & number, int & found);
int		is_char(std::string const & number, int & found);
void	print_float(float & f);
void	print_double(double const & f);
void	print_int(float const & f);
void	print_char(float const & f);

#endif