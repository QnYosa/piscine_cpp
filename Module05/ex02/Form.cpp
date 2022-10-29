#include "Form.hpp"

AForm::AForm(): _name("Nameless Useless form"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << PURPLE << "Form default constructor\n" << RESET;
}

AForm::AForm(std::string const & name): _name(name), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << PURPLE << "Form string constructor\n" << RESET;
}

AForm::AForm(std::string const & name, bool is_signed, const int gradeToSign, const int gradeToExecute): \
_name(name), _signed(is_signed), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign > 150)
		throw (AForm::GradeTooLowException());
	else if (gradeToSign < 1)
		throw (AForm::GradeTooHighException());
	else if (gradeToExecute > 150)
		throw (AForm::GradeTooLowException());
	else if (gradeToExecute < 1)
		throw (AForm::GradeTooHighException());
	std::cout << PURPLE << "Form complete constructor\n" << RESET;
}

AForm::AForm(AForm const & src): _name(src._name), _signed(src._signed),\
 _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute) 
{	
	if (src._gradeToSign > 150)
		throw (AForm::GradeTooLowException());
	else if (src._gradeToSign < 1)
		throw (AForm::GradeTooHighException());
	else if (src._gradeToExecute > 150)
		throw (AForm::GradeTooLowException());
	else if (src._gradeToExecute < 1)
		throw (AForm::GradeTooHighException());
	std::cout << PURPLE << "Form Copy constructor\n" << RESET;
}

AForm::~AForm()
{
	std::cout << "Form destructor\n";
}

AForm & AForm::operator=(AForm const & src)
{
	if (this != &src)
	{
		if (src._gradeToSign > 150)
			throw (AForm::GradeTooLowException());
		else if (src._gradeToSign < 1)
			throw (AForm::GradeTooHighException());
		else if (src._gradeToExecute > 150)
			throw (AForm::GradeTooLowException());
		else if (src._gradeToExecute < 1)
			throw (AForm::GradeTooHighException());
		_signed = src._signed;
	}
	return (*this);
}

std::string AForm::getName()const
{
	return (_name);
}

bool  		AForm::getSignature()const
{
	return (_signed);
}

int 		AForm::getGradeToSign()const
{
	return (_gradeToSign);
}

int			AForm::getGradeToExecute()const
{
	return (_gradeToExecute);
}

void		AForm::beSigned(Bureaucrat const & bCrat)
{
	if (_signed == true)
	{
		std::cerr << bCrat.getName() << " couldn't sign " \
		<< getName() << " because it has already be signed\n";
	}
	else if (bCrat.getGrade() > _gradeToSign)
	{
		throw (GradeTooLowException());
	}
	_signed = true;
}

std::ostream & operator<<(std::ostream & out, AForm const & rhs)
{
	out << "Name = " << rhs.getName() << ", is it Signed? " << rhs.getSignature() \
	<< ", Grade required to be signed = " << rhs.getGradeToSign() \
	<< ", Grade required to be executed " << rhs.getGradeToExecute() << std::endl;
	return (out);
}