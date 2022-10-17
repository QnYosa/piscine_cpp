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

Form::Form(Form const & src): _name("Useless form"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
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
		this->_name = src._name;
		this->_signed = src._signed;
		// this->_gradeToSign = *(&src._gradeToSign);
		// this->_gradeToExecute = src._gradeToExecute;
	}
	return (*this);
}

std::string const & Form::getName()const
{
	return (_name);
}

bool const & Form::getSignature()const
{
	return (_signed);
}

const int 	Form::getGradeToSign()const
{
	return (_gradeToSign);
}

const int	Form::getGradeToExecute()const
{
	return (_gradeToExecute);
}

std::ostream & operator<<(std::ostream & out, Form const & rhs)
{
	out << rhs.getName() << " " << rhs.getSignature() << " " << rhs.getGradeToSign() \
	<< " " << rhs.getGradeToExecute() << " ";
	return (out);
}