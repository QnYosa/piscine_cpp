#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
/*
void	tests_zero()
{
	std::cout << LIGHTBLUE << "==============ERRORS===========\n" << RESET;
	{
		{
			std::cout << "\n=======Construction IMPOSSIBLE=======\n";
			{
				std::cout << "\n=========ZERO========\n";
				try
				{
					Bureaucrat	zero(0);
					std::cout << zero << std::endl; // on voit que rien n'a été initialisé
				}
				catch(Bureaucrat::GradeTooHighException & e)
				{
					std::cerr << e.what() << '\n';
				}
				catch(Bureaucrat::GradeTooLowException & e)
				{
					std::cerr << e.what() << '\n';
				}
				catch (...)
				{
					std::cerr << "";
				}
			}
			std::cout << "\n=============-1==========\n";
			{
				try
				{
					Bureaucrat	minus(-1);
					std::cout << minus << std::endl; // car aucun unknown n'apparait
				}
				catch(Bureaucrat::GradeTooHighException & e)
				{
					std::cerr << e.what() << '\n';
				}
				catch(Bureaucrat::GradeTooLowException & e)
				{
					std::cerr << e.what() << '\n';
				}
				catch (...)
				{
					std::cerr << "";
				}
			}
			std::cout << "============ OVER 150 =============\n";
			{
				try
				{
					Bureaucrat	tooLow(151);
					std::cout << tooLow << std::endl; // idem 				
				}
				catch(Bureaucrat::GradeTooHighException & e)
				{
					std::cerr << e.what() << '\n';
				}
				catch(Bureaucrat::GradeTooLowException & e)
				{
					std::cerr << e.what() << '\n';
				}
				catch (...)
				{
					std::cerr << "";
				}
			}	
			std::cout << "============OPERATOR '=' ==============\n";
			{
				try
				{
					Bureaucrat	fry;
					Bureaucrat	zoidberg("Zoidberg", 173);
					fry = zoidberg;
					std::cout << fry; // on ne le verra jamais a cause zoidberg
				}
				catch(Bureaucrat::GradeTooHighException& e)
				{
					std::cerr << e.what() << '\n';
				}
				catch(Bureaucrat::GradeTooLowException& e)
				{
					std::cerr << e.what() << '\n';
				}
				catch(...)
				{
					std::cerr << "";
				}			
			}	
		}
		{
			std::cout << "\n===========INCREMENTATIONS===========\n";
			try
			{
				Bureaucrat	lowLimit(150);
				lowLimit.demotion();
				std::cout << lowLimit << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
			catch (...)
			{
				std::cerr << "";
			}
			try
			{
				Bureaucrat	highLimit(1);
				highLimit.promotion();
				std::cout << highLimit << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
			catch (...)
			{
				std::cerr << "";
			}			
		}
	}
	std::cout << "\n==============WORKING==========\n";
	Bureaucrat	newbie("newbie");
	Bureaucrat	morgan("Morgan Proctor", 19);
	Bureaucrat	hermes("Hermes Conrad", 34);
	std::cout << "============LAST TESTS===========\n";
	hermes.demotion();
	std::cout << hermes << std::endl;
	morgan.promotion();
	std::cout << morgan << std::endl;
	std::cout << newbie << std::endl;
	newbie = hermes;
	std::cout << "newbie = " << newbie << std::endl << std::endl;
	return ;
}

void	tests_that_will_fail()
{
	std::cout << LIGHTBLUE << "====================CONSTRUCTOR CRASH TEST======================\n" << RESET;
	{
		try
		{
			AForm fail_one("test form", true, 152, 5);
			std::cout << "SALUT " << fail_one;
		}
		catch(AForm::GradeTooHighException error)
		{
			std::cerr << error.what() << '\n';
		}
		catch(AForm::GradeTooLowException error)
		{
			std::cerr << error.what() << '\n';
		}
		catch (...)
		{
			std::cerr << "SOME KIND OF ERROR\n";
		}
		try
		{
			AForm fail_one("test form", true, 15, 155);
			std::cout << "SALUT " << fail_one;
		}
		catch(AForm::GradeTooHighException error)
		{
			std::cerr << error.what() << '\n';
		}
		catch(AForm::GradeTooLowException error)
		{
			std::cerr << error.what() << '\n';
		}
		catch (...)
		{
			std::cerr << "SOME KIND OF ERROR\n";
		}
	}
}

void	tests_copy_overload()
{
	std::cout << LIGHTBLUE << "\n====================TESTS COPY OVERLOAD==========================\n" << RESET;
	{
		AForm LIGHTBLUEundant;
		AForm permit("Permis de conduire");
		std::cout << permit;
		AForm complete("Stupid Form", true, 45, 20);
		std::cout << "=====COPY======\n";
		std::cout << LIGHTBLUEundant;
		std::cout << complete;
		LIGHTBLUEundant = complete;
		std::cout << LIGHTBLUEundant;
	}
}

void	tests_hermes()
{
	std::cout << LIGHTBLUE << "\n======================TESTS HERMES=======================\n" << RESET;
	try
	{
		Bureaucrat hermes("Hermes Conrad", 34);
		AForm randForm("randForm", false, 36, 45);
		AForm signedForm("signedForm", true, 36, 45);
		AForm importantForm("Important Form", false, 15, 15);
		std::cout << hermes << std::endl;
		std::cout << randForm;
		hermes.signForm(randForm);
		std::cout << randForm;
		hermes.signForm(signedForm); // already signed
		hermes.signForm(importantForm); // grade too low 
	}
	catch(AForm::GradeTooHighException e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(AForm::GradeTooLowException e)
	{
		std::cerr << e.what() << '\n';
	}
	catch (...)
	{
		std::cerr << "OTHERKIND OF ERROR\n";
	}
}
*/
void	test_shrubberry()
{
	try
	{
		ShrubberyCreationForm trees("Central Park");
		Bureaucrat NumberOnePointZero("Number 1.0", 1);
		NumberOnePointZero.executeForm(trees);
		NumberOnePointZero.signForm(trees);
		NumberOnePointZero.executeForm(trees);
		Bureaucrat WardenVogel("Warden Vogel", 145); // le vrai est de grade 135
		WardenVogel.executeForm(trees);
	}
	catch(AForm::GradeTooLowException e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(AForm::GradeTooHighException e)
	{
		std::cerr << e.what() << '\n';		
	}
	catch(...)
	{
		std::cerr << "OTHER KIND OF ERROR" << '\n';		
	}
	
}

void	test_shrubberry_nest()
{
	try
	{
		AForm *shrubbery; 
		ShrubberyCreationForm trees("Yellowstone");
		Bureaucrat NumberOnePointZero("Number 1.0", 1);
		shrubbery = &trees;
		NumberOnePointZero.executeForm(*shrubbery);
		NumberOnePointZero.signForm(*shrubbery);
		NumberOnePointZero.executeForm(*shrubbery);
		Bureaucrat WardenVogel("Warden Vogel", 145); // le vrai est de grade 135
		WardenVogel.executeForm(trees);
	}
	catch(ShrubberyCreationForm::GradeTooLowException e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(ShrubberyCreationForm::GradeTooHighException e)
	{
		std::cerr << e.what() << '\n';		
	}
	catch(...)
	{
		std::cerr << "OTHER KIND OF ERROR" << '\n';		
	}
	
}

void	test_robotomy()
{
	try
	{
		AForm *robotomy; 
		RobotomyRequestForm trees("Bender");
		Bureaucrat NumberOnePointZero("Number 1.0", 1);
		robotomy = &trees;
		NumberOnePointZero.executeForm(*robotomy);
		NumberOnePointZero.signForm(*robotomy);
		NumberOnePointZero.executeForm(*robotomy);
		Bureaucrat WardenVogel("Warden Vogel", 145); // le vrai est de grade 135
		WardenVogel.executeForm(*robotomy);
	}
	catch(AForm::GradeTooLowException e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(AForm::GradeTooHighException e)
	{
		std::cerr << e.what() << '\n';		
	}
	catch(...)
	{
		std::cerr << "OTHER KIND OF ERROR" << '\n';		
	}
	
}


void	test_robotomy_nest()
{
	try
	{
		AForm *robotomy; 
		RobotomyRequestForm form("Bender");
		Bureaucrat NumberOnePointZero("Number 1.0", 1);
		robotomy = &form;
		NumberOnePointZero.executeForm(*robotomy);
		NumberOnePointZero.signForm(*robotomy);
		NumberOnePointZero.executeForm(*robotomy);
		Bureaucrat WardenVogel("Warden Vogel", 145); // le vrai est de grade 135
		WardenVogel.executeForm(*robotomy);
	}
	catch(RobotomyRequestForm::GradeTooLowException e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(RobotomyRequestForm::GradeTooHighException e)
	{
		std::cerr << e.what() << '\n';		
	}
	catch(...)
	{
		std::cerr << "OTHER KIND OF ERROR" << '\n';		
	}
	
}

void	test_president_nest()
{
	try
	{
		AForm *Pardon; 
		PresidentialPardonForm pardonForm("Bender");
		Bureaucrat NumberOnePointZero("Number 1.0", 1);
		Pardon = &pardonForm;
		NumberOnePointZero.executeForm(*Pardon);
		NumberOnePointZero.signForm(*Pardon);
		NumberOnePointZero.executeForm(*Pardon);
		Bureaucrat WardenVogel("Warden Vogel", 145); // le vrai est de grade 135
		WardenVogel.executeForm(*Pardon);
	}
	catch(RobotomyRequestForm::GradeTooLowException e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(RobotomyRequestForm::GradeTooHighException e)
	{
		std::cerr << e.what() << '\n';		
	}
	catch(...)
	{
		std::cerr << "OTHER KIND OF ERROR" << '\n';		
	}
	
}

int main()
{
// 	tests_zero();
// 	tests_that_will_fail();
// 	tests_copy_overload();
// 	tests_hermes();
	// test_shrubberry(); // classe bien abstraite 
	// test_shrubberry_nest(); // class bien abstraite
	// test_robotomy_nest();
	// test_robotomy_nest();
	// test_robotomy_nest();
	// test_robotomy_nest();
	// test_robotomy_nest();
	// test_president_nest();
	Intern Ryan;
	AForm* e = Ryan.makeForm("robotomy for bender", "bender");
	std::cout << *e;
	AForm* f = Ryan.makeForm("shrubbery for bender", "bender");
	std::cout << *f;
	AForm* d = Ryan.makeForm("robotomy for bender", "bender");
	std::cout << *d;
	AForm* fail = Ryan.makeForm("do something and make it into a form", "bender");
	if (fail)
		std::cout << *fail;
	// std::cout << *de;
	// AForm *robotomy;
	// RobotomyRequestForm benderForm("Bender");
	// robotomy = &benderForm;
	// std::cout << benderForm.getGradeToExecute() << std::endl;
	// std::cout << robotomy->getName();
	delete e;
	delete f;
	delete d;
	return (0);
}