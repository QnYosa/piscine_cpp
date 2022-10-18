#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream> 
#include "Form.hpp"

#define LIGHTBLUE "\033[1;34m"
#define YELLOW "\033[1;33m"
#define PURPLE "\033[1;35m"
#define GREY "\033[1;30m"
#define RESET "\033[0m"

class AForm;

class Bureaucrat
{
	private:
		std::string _name;
		int _grade;
		
	public:
		/*---------------CONSTRUCTORS & DESTRUCTORS----------------------*/
		Bureaucrat(/* args */);
		Bureaucrat(int);
		Bureaucrat(std::string name);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();
		/*------------------------OVERLOAD-------------------------------*/
		Bureaucrat & operator=(Bureaucrat const & src);
		/*----------------------NESTED CLASSES---------------------------*/
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		/*----------------------METHODS-----------------------------------*/
		std::string const &	getName()const;
		int const & 		getGrade()const;
		void				promotion();
		void				demotion();
		void				signForm(AForm & form);
		void				executeForm(AForm const & form);
};
	std::ostream & operator<<(std::ostream & out, Bureaucrat const & rhs);

#endif