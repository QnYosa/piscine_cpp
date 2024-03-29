#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string			_name; //ok
		bool				_signed; //ok
		const int			_gradeToSign; //ok
		const int			_gradeToExecute; //ok
	public:
	/*----------------------CONSTRUCTORS AND DESTRUCTORS-----------------------*/
		Form(/* args */); //ok
		Form(std::string const & name); //ok
		Form(std::string const & name, bool is_signed, const int gradeToSign, const int GradeToSign); //ok
		Form(Form const & src);//ok
		~Form(); //ok
	/*--------------------------------OVERLOADS--------------------------------*/
	Form & operator=(Form const & src); // bug avec les const
	/*-------------------------------NESTED CLASSES----------------------------*/
	class	GradeTooLowException
	{
		public:
			const char*	what()const throw(); // done
	};

	class GradeTooHighException
	{
		public:
			const char* what() const throw(); // done
	};
	/*----------------------------------METHODS--------------------------------*/
	std::string 		getName()const; //ok
	bool 			 	getSignature()const;//ok
	int					getGradeToSign()const;//ok
	int 				getGradeToExecute()const;//ok
	void				beSigned(Bureaucrat const & bCrat);
};
std::ostream 	&		operator<<(std::ostream & out, Form const & rhs); //ok

#endif