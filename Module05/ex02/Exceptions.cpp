#include "Bureaucrat.hpp"
#include "Form.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("\033[1;31mGrade can't be inferior to 1\033[0m");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("\033[1;31mGrade can't be superior to 150\033[0m");
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("\033[0;31mGrade too high\033[0m");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("\033[1;31mGrade too low\033[0m");
} 