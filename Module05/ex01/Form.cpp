#include "Form.hpp"

Form::Form(): _name("Useless form"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Form default constructor\n";
}

Form::Form(std::string const & name): _name(name), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Form string constructor\n";
}

Form::Form(std::string const & name, bool is_signed, const int gradeToSign, const int gradeToExecute): _name(name), _signed(is_signed), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign > 150)
		throw (Form::GradeTooLowException());
	else if (gradeToSign < 1)
		throw (Form::GradeTooHighException());
	else if (gradeToExecute > 150)
		throw (Form::GradeTooLowException());
	else if (gradeToExecute < 1)
		throw (Form::GradeTooHighException());
	std::cout << "Form complete constructor\n";
}

Form::Form(Form const & src): _name(src._name), _signed(src._signed),\
 _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute) 
{	
	if (src._gradeToSign > 150)
		throw (Form::GradeTooLowException());
	else if (src._gradeToSign < 1)
		throw (Form::GradeTooHighException());
	else if (src._gradeToExecute > 150)
		throw (Form::GradeTooLowException());
	else if (src._gradeToExecute < 1)
		throw (Form::GradeTooHighException());
	std::cout << "Form Copy constructor\n";
}

Form::~Form()
{
	std::cout << "Form destructor\n";
}

Form & Form::operator=(Form const & src)
{
	if (this != &src)
	{
		if (src._gradeToSign > 150)
			throw (Form::GradeTooLowException());
		else if (src._gradeToSign < 1)
			throw (Form::GradeTooHighException());
		else if (src._gradeToExecute > 150)
			throw (Form::GradeTooLowException());
		else if (src._gradeToExecute < 1)
			throw (Form::GradeTooHighException());
		Form tmp(src._name, src._signed, src._gradeToSign, src._gradeToExecute);
		*this = tmp;
	}
	return (*this);
}

std::string Form::getName()const
{
	return (_name);
}

bool  		Form::getSignature()const
{
	return (_signed);
}

int 		Form::getGradeToSign()const
{
	return (_gradeToSign);
}

int			Form::getGradeToExecute()const
{
	return (_gradeToExecute);
}

void		Form::beSigned(Bureaucrat const & bCrat)
{
	if (_signed == true)
		std::cerr << bCrat.getName() << "couldn't sign " \
		<< getName() << " because it has already be signed\n";
	else if (bCrat.getGrade() < _gradeToSign)
		throw (GradeTooLowException());
	_signed = true;
}

std::ostream & operator<<(std::ostream & out, Form const & rhs)
{
	out << rhs.getName() << " " << rhs.getSignature() << " " << rhs.getGradeToSign() \
	<< " " << rhs.getGradeToExecute() << " ";
	return (out);
}