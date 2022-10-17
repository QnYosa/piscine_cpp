#include "Bureaucrat.hpp"

int main()
{
	std::cout << "==============ERRORS===========\n";
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
	return (0);
}