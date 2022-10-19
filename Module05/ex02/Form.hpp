#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;

class AForm
{
	private:
		std::string			_name; //ok
		bool				_signed; //ok
		const int			_gradeToSign; //ok
		const int			_gradeToExecute; //ok
	public:
	/*----------------------CONSTRUCTORS AND DESTRUCTORS-----------------------*/
		AForm(/* args */); //ok
		AForm(std::string const & name); //ok
		AForm(std::string const & name, bool is_signed, const int gradeToSign, const int GradeToSign); //ok
		AForm(AForm const & src);//ok
		virtual ~AForm(); //ok
	/*--------------------------------OVERLOADS--------------------------------*/
	AForm & operator=(AForm const & src); // bug avec les const
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
	virtual void		execute(Bureaucrat const & executor)const = 0;
};
std::ostream 	&		operator<<(std::ostream & out, AForm const & rhs); //ok

#endif