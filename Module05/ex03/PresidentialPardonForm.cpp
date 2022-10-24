#include "PresidentialPardonForm.hpp"

// PresidentialPardonForm::PresidentialPardonForm()
// {
// 	std::cout << YELLOW << "PresidentialPardonForm constructor\n" << RESET;
// }

PresidentialPardonForm::PresidentialPardonForm(std::string const & target): AForm("PresidentialPardonForm", false, 25, 5), _target(target)
{
	std::cout << YELLOW << "PresidentialPardonForm string constructor\n" << RESET;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src)
{
	std::cout << YELLOW << "PresidentialPardonForm copy constructor\n" << RESET;
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << GREY << "PresidentialPardonForm destructor\n" << RESET;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
	if (this != &src)
		_target = src._target; 
	return (*this);
}

std::string		PresidentialPardonForm::getTarget()
{
	return (_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor)const
{
	std::cout << "\n===============EXECUTING PRESIDENTIAL FORM===========================\n";
	if (this->getSignature() == 0)
	{
		std::cout << "Document has not been signed\n";
		return ;
	}
	else if (executor.getGrade() > this->getGradeToExecute())
		throw (PresidentialPardonForm::GradeTooLowException());
	std::cout << this->_target <<  " has been forgiven by Zaphod Bumblebox\n";
}
