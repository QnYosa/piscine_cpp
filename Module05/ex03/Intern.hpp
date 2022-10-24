#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
	Intern();
	Intern(Intern const & src);
	~Intern();
	Intern & operator=(Intern const & src);
	AForm* makeForm(std::string const & nameForm, std::string const & target);
};

#endif