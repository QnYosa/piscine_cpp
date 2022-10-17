#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */): _name("Unknown"), _grade(150)
{
	std::cout << "Bureaucrat default constructor \n";
}

Bureaucrat::Bureaucrat(int grade): _name("Unknown")
{
	if (grade < 1)
		throw (GradeTooHighException());
	else if (grade > 150)
		throw (GradeTooLowException());
	_grade = grade;
	std::cout << "Bureaucrat int constructor \n";
}

Bureaucrat::Bureaucrat(std::string name): _name(name), _grade(150)
{
	std::cout << "Bureaucrat string constructor\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (grade < 1)
		throw (GradeTooHighException());
	else if (grade > 150)
		throw (GradeTooLowException());
	std::cout << "Bureaucrat complete constructor\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const & src): _name("Unknown"), _grade(150)
{
	*this = src;
	std::cout << "Bureaucrat copy constructor \n";
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor \n";
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src)
{
	if (this != &src)
	{
		if (src._grade < 1)
			throw(Bureaucrat::GradeTooHighException());
		_name = src._name;
		_grade = src._grade;
	}
	return (*this);
}

std::string const & Bureaucrat::getName()const
{
	return (this->_name);
}

int const & Bureaucrat::getGrade()const
{
	return (this->_grade);
}

void	Bureaucrat::promotion()
{
	if (this->_grade <= 1)
		throw(GradeTooHighException());
	this->_grade--;
}

void	Bureaucrat::demotion()
{
	if (_grade >= 150)
		throw(GradeTooLowException());
	_grade++;
}

std::ostream & operator<<(std::ostream & out, Bureaucrat const & rhs)
{
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (out);
}

