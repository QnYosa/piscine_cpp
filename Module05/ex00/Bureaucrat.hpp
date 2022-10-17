#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream> 
class Bureaucrat
{
	private:
		/* data */
		std::string _name;
		int _grade;
		
	public:
		Bureaucrat(/* args */);
		Bureaucrat(int);
		Bureaucrat(std::string name);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();
		class GradeTooHighException : public std::exception
		{
			public:
				/* data */
				const char* what() const throw();
			// public:
			// 	GradeTooHighException(/* args */);
			// 	~GradeTooHighException();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
			// public:
			// 	GradeTooLowException(/* args */);
			// 	virtual ~GradeTooLowException();
		};
		Bureaucrat & operator=(Bureaucrat const & src);
		std::string const &	getName()const;
		int const & getGrade()const;
		void	promotion();
		void	demotion();
};
	std::ostream & operator<<(std::ostream & out, Bureaucrat const & rhs);

#endif