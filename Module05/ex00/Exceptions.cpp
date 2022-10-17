#include "Bureaucrat.hpp"

// Bureaucrat::GradeTooHighException::GradeTooHighException()
// {
// 	std::cout << "GradeTooHighException default constructor\n";
// }

// Bureaucrat::GradeTooHighException::~GradeTooHighException()
// {
// 	std::cout << "GradeTooHighException destructor\n";
// }

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade can't be inferior to 1");
}

// Bureaucrat::GradeTooLowException::GradeTooLowException()
// {
// 	std::cout << "GradeTooLowException default constructor\n";
// }

// Bureaucrat::GradeTooLowException::~GradeTooLowException()
// {
// 	std::cout << "GradeTooLowException destructor\n";
// }

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade can't be superior to 150");
}
