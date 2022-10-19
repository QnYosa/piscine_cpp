#include"ShrubberyCreationForm.hpp"

// ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", false, 145, 137)
// {
// 	std::cout << YELLOW << "ShrubberyCreationForm constructor\n" << RESET;
// }


ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : AForm("ShrubberyCreationForm", false, 145, 137), _target(target)
{
	std::cout << YELLOW << "ShrubberyCreationForm string constructor\n" << RESET;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src):AForm(src)
{
	std::cout << YELLOW << "ShrubberyCreationForm copy constructor\n" << RESET;
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << GREY << "ShrubberyCreationForm destructor\n" << RESET;

}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
	if (this != &src)
		_target = src._target; 
	return (*this);
}

std::string		ShrubberyCreationForm::getTarget()
{
	return (_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor)const
{
	if (!this->getSignature())
	{
		std::cout << "Document is not signed\n";
		return ;
	}
	else if (executor.getGrade() > this->getGradeToExecute())
		throw (ShrubberyCreationForm::GradeTooLowException());
	std::string fname = this->_target;
	fname += "_shrubbery";
	std::ofstream file(fname.c_str());
	file <<"       ###           ###\n";
	file <<"      #o###         #o###\n";
	file <<"    #####o###     #####o###\n";
	file <<"   #o##||#/###   #o##|#/###\n";
	file <<"    ###||/#o#    ###||#o#\n";
	file <<"     # }|{  #     # }|{  #\n";
	file <<"       }|{          }|{\n";
	file <<"       }|{          }|{\n";
	file <<"       }|{          }|{\n";
	file <<"       }|{          }|{\n";
	file <<"       }|{          }|{\n";
	file <<"       }|{          }|{\n";
	file <<"       }|{          }|{\n";
}
