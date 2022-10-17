#include "Bureaucrat.hpp"
#include "Form.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade can't be inferior to 1");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade can't be superior to 150");
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
} 