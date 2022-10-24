#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor\n";
}

Intern::Intern(Intern const & src)
{
	std::cout << "Intern copy constructor\n";
	*this = src;
}

Intern::~Intern()
{
}

Intern & Intern::operator=(Intern const & src)
{
	(void)src;
	return (*this);
}

AForm*	Intern::makeForm(std::string const & name, std::string const & target)
{
	if (name.empty() || target.empty())
		return (NULL);
	std::string lowercase = name;
	for (int i = 0; i < (int)name.length(); i++)
		lowercase[i] = tolower(name[i]);
	std::string forms[3] = {"presidential","robotomy", "shrubbery"};
	int search = 150;
	for (int i = 0; i < 3; i++)
	{
		std::cout << forms[i] << std::endl;
		if (lowercase.find(forms[i]) != std::string::npos)
			search = i;
	}
	switch (search)
	{
		case 0:
			return (new PresidentialPardonForm(target));
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new ShrubberyCreationForm(target));
		default:
			break;
	}
	return (NULL);
}
