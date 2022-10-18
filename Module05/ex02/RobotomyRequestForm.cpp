#include "RobotomyRequestForm.hpp"

// RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", false, 72, 45)
// {
// 	std::cout << YELLOW << "Robotomy Request Form constructor\n" << RESET;
// }

RobotomyRequestForm::RobotomyRequestForm(std::string const & target): AForm("RobotomyRequestForm", false, 72, 45), _target(target)
{
	std::cout << YELLOW << "Robotomy Request Form string constructor\n" << RESET;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src)
{
	std::cout << YELLOW << "Robotomy Request Form copy constructor\n" << RESET;
	*this = src;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << GREY << "Robotomy Request Form destructor\n" << RESET;

}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	if (this != &src)
		_target = src._target; 
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor)const
{
	(void)executor;
}
