#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

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
int main()
{
// 	tests_zero();
// 	tests_that_will_fail();
// 	tests_copy_overload();
// 	tests_hermes();
       ###
      #o###
    #####o###
   #o#\#|#/###
    ###\|/#o#
     # }|{  #
ejm97  }|{
	return (0);
}