#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade can't be inferior to 1");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade can't be superior to 150");
}
